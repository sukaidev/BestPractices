package com.sukaidev.processor.binding.const

import com.squareup.kotlinpoet.ClassName

/**
 * Created by sukaidev on 2021/07/03.
 *
 * 一些常量
 *
 * @author sukaidev
 */
const val BINDING_CLASS_POSTFIX = "_ViewBinding"

const val BIND_METHOD_NAME = "bind"

const val UNBIND_METHOD_NAME = "unBind"

const val UNBINDER_JVM_CLASS_NAME = "com.sukaidev.runtime.UnBinder"

const val ACTIVITY_JVM_CLASS_NAME = "android.app.Activity"

const val FRAGMENT_JVM_CLASS_NAME = "androidx.fragment.app.Fragment"

const val VIEW_JVM_CLASS_NAME = "android.view.View"

const val UTIL_CLASS_PACKAGE_NAME = "com.sukaidev.runtime"

const val UTIL_CLASS_SIMPLE_NAME = "Utils"

val STRING: ClassName = ClassName("kotlin", "String")
val LONG_ARRAY: ClassName = ClassName("kotlin", "LongArray")
val INT_ARRAY: ClassName = ClassName("kotlin", "IntArray")
val SHORT_ARRAY: ClassName = ClassName("kotlin", "ShortArray")
val BYTE_ARRAY: ClassName = ClassName("kotlin", "ByteArray")
val CHAR_ARRAY: ClassName = ClassName("kotlin", "CharArray")
val BOOLEAN_ARRAY: ClassName = ClassName("kotlin", "BooleanArray")
val FLOAT_ARRAY: ClassName = ClassName("kotlin", "FloatArray")
val DOUBLE_ARRAY: ClassName = ClassName("kotlin", "DoubleArray")