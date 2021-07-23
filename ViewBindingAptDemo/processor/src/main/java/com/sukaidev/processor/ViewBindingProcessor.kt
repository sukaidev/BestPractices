package com.sukaidev.processor

import com.google.auto.service.AutoService
import com.sukaidev.annotations.BindClass
import com.sukaidev.annotations.BindView
import com.sukaidev.processor.binding.BindingActivity
import com.sukaidev.processor.binding.BindingFragment
import com.sukaidev.processor.binding.const.ACTIVITY_JVM_CLASS_NAME
import com.sukaidev.processor.binding.const.FRAGMENT_JVM_CLASS_NAME
import com.sukaidev.processor.binding.const.VIEW_JVM_CLASS_NAME
import com.sukaidev.processor.binding.entity.BindingView
import com.sukaidev.processor.util.ContextHolder
import com.sukaidev.processor.util.ContextHolder.elements
import com.sukaidev.processor.util.ContextHolder.types
import com.sukaidev.processor.util.Logger
import com.sukaidev.processor.util.isSubType
import com.sun.tools.javac.code.Symbol
import javax.annotation.processing.AbstractProcessor
import javax.annotation.processing.ProcessingEnvironment
import javax.annotation.processing.Processor
import javax.annotation.processing.RoundEnvironment
import javax.lang.model.SourceVersion
import javax.lang.model.element.Element
import javax.lang.model.element.TypeElement

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

    override fun init(processingEnv: ProcessingEnvironment) {
        super.init(processingEnv)
        Logger.init(processingEnv.messager)
        ContextHolder.init(processingEnv)
    }

    override fun process(
        annotations: MutableSet<out TypeElement>,
        roundEnv: RoundEnvironment
    ): Boolean {
        val bindingActivities = HashMap<Element, BindingActivity>()
        val bindingFragments = HashMap<Element, BindingFragment>()

        // 第一步，收集所有标注了注解的Activity/Fragment
        val activityType = elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asType()
        val fragmentType = elements.getTypeElement(FRAGMENT_JVM_CLASS_NAME).asType()
        roundEnv.getElementsAnnotatedWith(BindClass::class.java)
            .filter { it.kind.isClass }
            .forEach {
                try {
                    when {
                        it.asType().isSubType(activityType, types) -> {
                            bindingActivities[it] = BindingActivity(it as TypeElement)
                        }
                        it.asType().isSubType(fragmentType, types) -> {
                            bindingFragments[it] = BindingFragment(it as TypeElement)
                        }
                        else -> {
                            Logger.error(it, "Unsupported typeElement:${it.simpleName}")
                        }
                    }
                } catch (e: Exception) {
                    Logger.logParsingError(it, BindClass::class.java, e)
                }
            }

        // 第二步，收集所有标注了注解的View
        val viewType = elements.getTypeElement(VIEW_JVM_CLASS_NAME).asType()
        roundEnv.getElementsAnnotatedWith(BindView::class.java)
            .filter { it.kind.isField }
            .forEach {
                try {
                    // 必须是View的子类
                    if (it.isSubType(viewType, types)) {
                        if (it.enclosingElement.isSubType(activityType, types)) {
                            bindingActivities[it.enclosingElement]?.bindingViews?.add(BindingView(it as Symbol.VarSymbol))
                                ?: Logger.error(it, "BindingView $it annotated as @BindView while ${it.enclosingElement} not annotated.")
                        }
                        if (it.enclosingElement.isSubType(fragmentType, types)) {
                            bindingFragments[it.enclosingElement]?.bindingViews?.add(BindingView(it as Symbol.VarSymbol))
                                ?: Logger.error(it, "BindingView $it annotated as @BindView while ${it.enclosingElement} not annotated.")
                        }
                    }
                } catch (e: Exception) {
                    Logger.logParsingError(it, BindView::class.java, e)
                }
            }

        // 第三步，为Activity/Fragment生成对应ViewBinding类
        bindingActivities.values.forEach {
            it.builder.build()
        }
        bindingFragments.values.forEach {
            it.builder.build()
        }
        return true
    }

    override fun getSupportedAnnotationTypes() = setOf(BindClass::class.java.name, BindView::class.java.name)

    override fun getSupportedSourceVersion() = SourceVersion.RELEASE_8
}