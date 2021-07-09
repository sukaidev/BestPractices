package com.sukaidev.compiler.binding

import com.squareup.kotlinpoet.*
import com.squareup.kotlinpoet.jvm.jvmDefault
import com.sukaidev.annotations.BindView
import com.sukaidev.compiler.binding.const.Constant.ACTIVITY_JVM_CLASS_NAME
import com.sukaidev.compiler.binding.const.Constant.BINDING_CLASS_POSTFIX
import com.sukaidev.compiler.binding.const.Constant.BIND_METHOD_NAME
import com.sukaidev.compiler.binding.const.Constant.UNBIND_METHOD_NAME
import com.sukaidev.compiler.binding.const.Constant.UTIL_CLASS_PACKAGE_NAME
import com.sukaidev.compiler.binding.const.Constant.UTIL_CLASS_SIMPLE_NAME
import com.sukaidev.compiler.binding.const.Constant.VIEW_JVM_CLASS_NAME
import com.sukaidev.compiler.util.ContextHolder.elements
import com.sukaidev.compiler.util.ContextHolder.filer
import com.sukaidev.compiler.util.Logger
import javax.tools.StandardLocation

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
class BindingActivityBuilder(private val bindingActivity: BindingActivity) {

    fun build() {
        if (bindingActivity.isAbstract) return

        val typeBuilder = TypeSpec.classBuilder(bindingActivity.simpleName + BINDING_CLASS_POSTFIX)
            .addModifiers(KModifier.PUBLIC, KModifier.FINAL)

        buildConstructor(typeBuilder)
        buildBindViews(typeBuilder)
        buildBindFunction(typeBuilder)
        buildUnBindFunction(typeBuilder)

        val fileBuilder = FileSpec.builder(bindingActivity.packageName, bindingActivity.simpleName + BINDING_CLASS_POSTFIX)
            .addImport(UTIL_CLASS_PACKAGE_NAME, UTIL_CLASS_SIMPLE_NAME)
            .addType(typeBuilder.build())

        writeKotlinToFile(fileBuilder.build())
    }

    private fun buildConstructor(typeBuilder: TypeSpec.Builder) {
        val primaryConstructor = FunSpec.constructorBuilder()
            .addParameter(
                ParameterSpec.builder("activity", elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asClassName().copy(true), KModifier.PRIVATE)
                    .build()
            )
            .build()

        val propertyActivity = PropertySpec.builder("activity", elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asClassName().copy(true), KModifier.PRIVATE)
            .initializer("activity")
            .mutable()
            .build()

        val propertyDecor = PropertySpec.builder("decorView", elements.getTypeElement(VIEW_JVM_CLASS_NAME).asClassName().copy(true), KModifier.PRIVATE)
            .initializer("activity!!.window.decorView")
            .mutable()
            .build()

        typeBuilder.primaryConstructor(primaryConstructor)
            .addProperties(listOf(propertyActivity, propertyDecor))
    }

    private fun buildBindViews(typeBuilder: TypeSpec.Builder) {
        val properties = bindingActivity.bindingViews.map {
            if (it.isPrivate) {
                Logger.error(it.symbol, "BindingView which annotated @BindView can not be private.")
                return
            }

            val name = it.name
            val type = it.asKotlinTypeName().copy(true)
            val resId = it.symbol.getAnnotation(BindView::class.java).redId

            PropertySpec.builder(name, type, KModifier.PRIVATE)
                .initializer("Utils.findRequiredViewAsType(decorView!!, $resId)")
                .mutable()
                .build()
        }

        typeBuilder.addProperties(properties)
    }

    /**
     * 构造`bind`方法
     */
    private fun buildBindFunction(typeBuilder: TypeSpec.Builder) {
        val bindFunBuilder = FunSpec.builder(BIND_METHOD_NAME)
            .addParameter("activity", elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asClassName())
            .addModifiers(KModifier.PUBLIC)
            .beginControlFlow("if (activity is %T)", bindingActivity.typeElement)
            .returns(UNIT)

        bindingActivity.bindingViews.forEach {
            if (it.isPrivate) {
                Logger.error(it.symbol, "BindingView which annotated @BindView can not be private.")
                return@forEach
            }

            val name = it.name
            bindFunBuilder.addStatement("activity.$name = $name!!")
        }

        bindFunBuilder.endControlFlow()
        typeBuilder.addFunction(bindFunBuilder.build())
    }

    /**
     * 构造`unBind`方法
     */
    private fun buildUnBindFunction(typeBuilder: TypeSpec.Builder) {
        val unBindMethodBuilder = FunSpec.builder(UNBIND_METHOD_NAME)
            .returns(UNIT)

        typeBuilder.propertySpecs.forEach {
            val name = it.name

            unBindMethodBuilder.addStatement("this.$name = null")
        }

        typeBuilder.addFunction(unBindMethodBuilder.build())
    }

    /**
     * 输出文件
     */
    private fun writeKotlinToFile(fileSpec: FileSpec) {
        try {
            val file = filer.createResource(
                StandardLocation.SOURCE_OUTPUT,
                bindingActivity.packageName,
                fileSpec.name + ".kt"
            )
            file.openWriter().also(fileSpec::writeTo).close()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }
}