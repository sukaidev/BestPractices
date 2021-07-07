package com.sukaidev.compiler

import com.google.auto.service.AutoService
import com.sukaidev.annotations.BindClass
import com.sukaidev.annotations.BindView
import com.sukaidev.compiler.binding.BindingActivity
import com.sukaidev.compiler.util.Logger
import java.lang.Exception
import javax.annotation.processing.*
import javax.lang.model.SourceVersion
import javax.lang.model.element.Element
import javax.lang.model.element.TypeElement
import javax.lang.model.util.Elements
import javax.lang.model.util.Types

/**
 * Created by sukaidev on 2021/07/02.
 *
 * 自定义注解处理器
 * 实现视图绑定功能
 *
 * @author sukaidev
 */
@AutoService(Processor::class)
class ViewBindingProcessor : AbstractProcessor() {

    private lateinit var types: Types
    private lateinit var filer: Filer
    private lateinit var elements: Elements

    override fun getSupportedAnnotationTypes() = setOf(BindView::class.java.name)

    override fun getSupportedSourceVersion() = SourceVersion.RELEASE_8

    override fun init(processingEnv: ProcessingEnvironment) {
        super.init(processingEnv)
        filer = processingEnv.filer
        types = processingEnv.typeUtils
        elements = processingEnv.elementUtils

        Logger.init(processingEnv.messager)
    }

    override fun process(
        annotations: MutableSet<out TypeElement>,
        roundEnv: RoundEnvironment
    ): Boolean {
        val bindingActivities = HashMap<Element, BindingActivity>()
        val bindingFragments = HashMap<Element, BindingActivity>()

        // 第一步，收集所有标注了注解的类
        val activityType = elements.getTypeElement("android.app.Activity").asType()
        val fragmentType = elements.getTypeElement("androidx.fragment.app").asType()
        roundEnv.getElementsAnnotatedWith(BindClass::class.java)
            .filter { it.kind.isClass }
            .forEach {
                try {
                    when {
                        types.isSubtype(it.asType(), activityType) -> {
                            bindingActivities[it] = BindingActivity(it as TypeElement)
                        }
                        types.isSubtype(it.asType(), fragmentType) -> {
                            bindingFragments[it] = BindingActivity(it as TypeElement)
                        }
                        else -> {
                            Logger.error(it, "Unsupported typeElement:${it.simpleName}")
                        }
                    }
                } catch (e: Exception) {
                    Logger.logParsingError(it, BindClass::class.java, e)
                }
            }


        return false
    }
}