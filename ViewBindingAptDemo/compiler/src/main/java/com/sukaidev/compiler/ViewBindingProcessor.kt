package com.sukaidev.compiler

import com.sun.tools.internal.ws.processor.generator.Names
import javax.annotation.processing.AbstractProcessor
import javax.annotation.processing.ProcessingEnvironment
import javax.annotation.processing.RoundEnvironment
import javax.lang.model.element.TypeElement

class ViewBindingProcessor : AbstractProcessor() {

    private lateinit var names: Names

    override fun init(processingEnv: ProcessingEnvironment?) {
        super.init(processingEnv)
    }

    override fun process(
        annotations: MutableSet<out TypeElement>?,
        roundEnv: RoundEnvironment?
    ): Boolean {
    }
}