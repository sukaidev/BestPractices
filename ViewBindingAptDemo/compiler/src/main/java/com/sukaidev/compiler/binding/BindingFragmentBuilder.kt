package com.sukaidev.compiler.binding

import com.squareup.kotlinpoet.*
import com.sukaidev.annotations.BindView
import com.sukaidev.compiler.binding.const.Constant
import com.sukaidev.compiler.util.ContextHolder
import com.sukaidev.compiler.util.Logger
import javax.tools.StandardLocation

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
class BindingFragmentBuilder(private val bindingFragment: BindingFragment) {


    fun build() {
        if (bindingFragment.isAbstract) return

        val typeBuilder = TypeSpec.classBuilder(bindingFragment.simpleName + Constant.BINDING_CLASS_POSTFIX)
            .addModifiers(KModifier.PUBLIC, KModifier.FINAL)
            .addSuperinterface(ContextHolder.elements.getTypeElement(Constant.UNBINDER_JVM_CLASS_NAME).asClassName())

        buildConstructor(typeBuilder)
        buildBindViews(typeBuilder)
        buildBindFunction(typeBuilder)
        buildUnBindFunction(typeBuilder)

        val fileBuilder = FileSpec.builder(bindingFragment.packageName, bindingFragment.simpleName + Constant.BINDING_CLASS_POSTFIX)
            .addImport(Constant.UTIL_CLASS_PACKAGE_NAME, Constant.UTIL_CLASS_SIMPLE_NAME)
            .addType(typeBuilder.build())

        writeKotlinToFile(fileBuilder.build())
    }

    private fun buildConstructor(typeBuilder: TypeSpec.Builder) {
        val primaryConstructor = FunSpec.constructorBuilder()
            .addParameter(
                ParameterSpec.builder("fragment", bindingFragment.typeElement.asClassName().copy(true), KModifier.PRIVATE)
                    .build()
            )
            .build()

        val propertyActivity = PropertySpec.builder("fragment", bindingFragment.typeElement.asClassName().copy(true), KModifier.PRIVATE)
            .initializer("fragment")
            .mutable()
            .build()

        val propertyDecor = PropertySpec.builder("view", ContextHolder.elements.getTypeElement(Constant.VIEW_JVM_CLASS_NAME).asClassName().copy(true), KModifier.PRIVATE)
            .initializer("fragment!!.view")
            .mutable()
            .build()

        typeBuilder.primaryConstructor(primaryConstructor)
            .addProperties(listOf(propertyActivity, propertyDecor))
    }

    private fun buildBindViews(typeBuilder: TypeSpec.Builder) {
        val properties = bindingFragment.bindingViews.map {
            if (it.isPrivate) {
                Logger.error(it.symbol, "BindingView which annotated @BindView can not be private.")
                return
            }

            val name = it.name
            val type = it.asKotlinTypeName().copy(true)
            val resId = it.symbol.getAnnotation(BindView::class.java).redId

            PropertySpec.builder(name, type, KModifier.PRIVATE)
                .initializer("Utils.findRequiredViewAsType(view!!, $resId)")
                .mutable()
                .build()
        }

        typeBuilder.addProperties(properties)
    }

    /**
     * 构造`bind`方法
     */
    private fun buildBindFunction(typeBuilder: TypeSpec.Builder) {
        val bindFunBuilder = FunSpec.builder(Constant.BIND_METHOD_NAME)
            .addModifiers(KModifier.PUBLIC, KModifier.OVERRIDE)
            .beginControlFlow("if (fragment is %T)", bindingFragment.typeElement)
            .returns(ContextHolder.elements.getTypeElement(Constant.UNBINDER_JVM_CLASS_NAME).asClassName().copy(true))

        bindingFragment.bindingViews.forEach {
            if (it.isPrivate) {
                Logger.error(it.symbol, "BindingView which annotated @BindView can not be private.")
                return@forEach
            }

            val name = it.name
            bindFunBuilder.addStatement("fragment?.$name = $name!!")
        }
        bindFunBuilder.addStatement("return this")
            .endControlFlow()
            .addStatement("return null")

        typeBuilder.addFunction(bindFunBuilder.build())
    }

    /**
     * 构造`unBind`方法
     */
    private fun buildUnBindFunction(typeBuilder: TypeSpec.Builder) {
        val unBindMethodBuilder = FunSpec.builder(Constant.UNBIND_METHOD_NAME)
            .addModifiers(KModifier.OVERRIDE)
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
            val file = ContextHolder.filer.createResource(
                StandardLocation.SOURCE_OUTPUT,
                bindingFragment.packageName,
                fileSpec.name + ".kt"
            )
            file.openWriter().also(fileSpec::writeTo).close()
        } catch (e: Exception) {
            e.printStackTrace()
        }
    }
}