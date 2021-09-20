package com.sukaidev.compiler

import com.google.gson.Gson
import javax.annotation.processing.Filer
import javax.annotation.processing.Messager
import javax.annotation.processing.ProcessingEnvironment
import javax.lang.model.util.Elements
import javax.lang.model.util.Types

/**
 * Created by sukaidev on 2021/07/02.
 *
 * 存放工具类
 *
 * @author sukaidev
 */
object ContextHolder {

    lateinit var types: Types
    lateinit var elements: Elements
    lateinit var messager: Messager
    lateinit var filer: Filer

    val gson = Gson()

    fun init(env: ProcessingEnvironment) {
        elements = env.elementUtils
        types = env.typeUtils
        messager = env.messager
        filer = env.filer
    }
}