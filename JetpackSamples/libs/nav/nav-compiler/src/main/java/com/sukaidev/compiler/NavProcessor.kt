package com.sukaidev.compiler

import com.google.auto.service.AutoService
import com.sukaidev.annotation.Destination
import com.sukaidev.compiler.Constants.ACTIVITY_JVM_CLASS_NAME
import com.sukaidev.compiler.Constants.CONFIG_OUT_PUT_FILE_NAME
import com.sukaidev.compiler.Constants.DIALOG_FRAGMENT_JVM_CLASS_NAME
import com.sukaidev.compiler.Constants.FRAGMENT_JVM_CLASS_NAME
import com.sukaidev.compiler.Constants.NAV_MODULE_NAME
import com.sukaidev.compiler.ContextHolder.elements
import com.sukaidev.compiler.ContextHolder.filer
import com.sukaidev.compiler.ContextHolder.gson
import com.sukaidev.compiler.ContextHolder.types
import java.io.File
import java.io.FileOutputStream
import java.io.OutputStreamWriter
import javax.annotation.processing.*
import javax.lang.model.SourceVersion
import javax.lang.model.element.Element
import javax.lang.model.element.TypeElement
import javax.lang.model.type.TypeMirror
import javax.tools.StandardLocation
import kotlin.math.abs

@AutoService(Processor::class)
@SupportedSourceVersion(SourceVersion.RELEASE_11)
@SupportedAnnotationTypes("com.sukaidev.annotation.Destination")
class NavProcessor : AbstractProcessor() {

    private lateinit var activityType: TypeMirror
    private lateinit var fragmentType: TypeMirror
    private lateinit var dialogType: TypeMirror
    private lateinit var moduleName: String

    override fun init(processingEnv: ProcessingEnvironment) {
        super.init(processingEnv)
        Logger.init(processingEnv.messager)
        ContextHolder.init(processingEnv)

        moduleName = processingEnv.options[NAV_MODULE_NAME] ?: ""
        activityType = elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asType()
        fragmentType = elements.getTypeElement(FRAGMENT_JVM_CLASS_NAME).asType()
        dialogType = elements.getTypeElement(DIALOG_FRAGMENT_JVM_CLASS_NAME).asType()
    }

    override fun process(
        annotations: MutableSet<out TypeElement>,
        roundEnv: RoundEnvironment
    ): Boolean {
        val resultMap = HashMap<String, DestinationNode>()

        roundEnv.getElementsAnnotatedWith(Destination::class.java)
            ?.filter { it.kind.isClass }
            ?.forEach { element ->
                handleDestination(element, resultMap)
            }

        if (resultMap.isNotEmpty()) {
            generateConfigFile(resultMap)
        }
        return true
    }

    private fun handleDestination(element: Element, resultMap: HashMap<String, DestinationNode>) {
        val typeElement = element as TypeElement
        val destination = typeElement.getAnnotation(Destination::class.java)

        val clazzName = typeElement.qualifiedName.toString()

        val id = abs(clazzName.hashCode())
        val path = destination.path
        val asStarter = destination.asStarter

        if (resultMap.containsKey(path)) {
            Logger.error(element, "Different pages cannot have the same path.")
            return
        }

        try {
            val type = when {
                element.asType().isSubType(activityType, types) -> "Activity"
                element.asType().isSubType(fragmentType, types) -> "Fragment"
                element.asType().isSubType(dialogType, types) -> "Dialog"
                else -> {
                    Logger.error(element, "Unsupported typeElement:${element.simpleName}")
                    return
                }
            }
            resultMap[path] = DestinationNode(id, path, type, asStarter, clazzName)
        } catch (e: Exception) {
            Logger.logParsingError(element, Destination::class.java, e)
        }
    }

    private fun generateConfigFile(map: HashMap<String, DestinationNode>) {
        try {
            val configPath =
                filer.createResource(StandardLocation.CLASS_OUTPUT, "", CONFIG_OUT_PUT_FILE_NAME)
                    .toUri().path

//            val appPath = configPath.substring(0, configPath.indexOf("app") + 4)
            val appPath =
                configPath.substring(0, configPath.indexOf(moduleName) + moduleName.length)
            val assetsPath = "$appPath/src/main/assets"
//            Logger.warn("appPath: $appPath   assetsPath : $assetsPath")
            val assetsFile = File(assetsPath)

            // assets目录可能并未创建
            if (!assetsFile.exists()) {
                assetsFile.mkdirs()
            }

            val outputFile = File(assetsPath, CONFIG_OUT_PUT_FILE_NAME)
            if (outputFile.exists()) {
                outputFile.delete()
            }
            val fos = FileOutputStream(outputFile)
            val writer = OutputStreamWriter(fos)
            writer.write(gson.toJson(map))
            writer.flush()
            writer.close()

            fos.close()
            writer.close()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }

}