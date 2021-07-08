package com.sukaidev.compiler.binding

import com.squareup.kotlinpoet.*
import com.sukaidev.compiler.binding.const.Constant.ACTIVITY_JVM_CLASS_NAME
import com.sukaidev.compiler.binding.const.Constant.BINDING_CLASS_POSTFIX
import com.sukaidev.compiler.util.ContextHolder.elements
import com.sukaidev.compiler.util.ContextHolder.filer
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

        buildBindFunction(typeBuilder)
        buildUnBindFunction(typeBuilder)

        val fileBuilder = FileSpec.builder(bindingActivity.packageName, bindingActivity.simpleName + BINDING_CLASS_POSTFIX)
        writeKotlinToFile(fileBuilder.build())
    }

    /**
     * 构造`bind`方法
     */
    private fun buildBindFunction(typeBuilder: TypeSpec.Builder) {
        val injectMethodBuilder = FunSpec.builder("bind")
                .addParameter("activity", elements.getTypeElement(ACTIVITY_JVM_CLASS_NAME).asClassName())
                .addModifiers(KModifier.PUBLIC, KModifier.COMPANION)
                .beginControlFlow("if (activity is \$T)", bindingActivity.typeElement)
                .addStatement("val decorView = activity.window.decorView")
                .returns(UNIT)

        bindingActivity.bindingViews.forEach {

        }

        typeBuilder.addFunction(injectMethodBuilder.build())
    }

    /**
     * 构造`unBind`方法
     */
    private fun buildUnBindFunction(typeBuilder: TypeSpec.Builder) {

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