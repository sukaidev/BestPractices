package com.sukaidev.compiler.util

import java.io.PrintWriter
import java.io.StringWriter
import javax.annotation.processing.Messager
import javax.lang.model.element.Element
import javax.tools.Diagnostic

/**
 * Created by sukaidev on 2021/07/02.
 *
 * 日志工具类
 *
 * @author sukaidev
 */
object Logger {

    private lateinit var messager: Messager

    fun init(messager: Messager) {
        this.messager = messager
    }

    fun warn(element: Element, message: String, vararg args: Any) {
        printMessage(Diagnostic.Kind.WARNING, element, message, *args)
    }

    fun warn(message: String, vararg args: Any) {
        printMessage(Diagnostic.Kind.WARNING, null, message, *args)
    }

    fun error(element: Element, message: String, vararg args: Any) {
        printMessage(Diagnostic.Kind.ERROR, element, message, *args)
    }

    fun note(element: Element, message: String, vararg args: Any) {
        printMessage(Diagnostic.Kind.NOTE, element, message, *args)
    }

    fun logParsingError(element: Element, annotation: Class<out Annotation>, e: Exception) {
        val stackTrace = StringWriter()
        e.printStackTrace(PrintWriter(stackTrace))
        error(element, "Unable to parse @%s binding.\n\n%s", annotation.simpleName, stackTrace)
    }

    private fun printMessage(
        kind: Diagnostic.Kind,
        element: Element?,
        message: String,
        vararg args: Any
    ) {
        if (element == null) {
            messager.printMessage(
                Diagnostic.Kind.WARNING, if (args.isNotEmpty()) {
                    String.format(message, *args)
                } else message
            )
        } else {
            messager.printMessage(
                kind,
                if (args.isNotEmpty()) {
                    String.format(message, *args)
                } else message, element
            )
        }
    }
}