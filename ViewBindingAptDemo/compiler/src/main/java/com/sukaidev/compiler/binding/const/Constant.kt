package com.sukaidev.compiler.binding.const

/**
 * Created by sukaidev on 2021/07/03.
 *
 * 一些常量
 *
 * @author sukaidev
 */
object Constant {

    const val BINDING_CLASS_POSTFIX = "_ViewBinding"

    const val BIND_METHOD_NAME = "bind"

    const val UNBIND_METHOD_NAME = "unBind"

    const val UNBINDER_JVM_CLASS_NAME =  "com.sukaidev.runtime.UnBinder"

    const val ACTIVITY_JVM_CLASS_NAME = "android.app.Activity"

    const val FRAGMENT_JVM_CLASS_NAME = "androidx.fragment.app.Fragment"

    const val VIEW_JVM_CLASS_NAME = "android.view.View"

    const val UTIL_CLASS_PACKAGE_NAME = "com.sukaidev.runtime"

    const val UTIL_CLASS_SIMPLE_NAME = "Utils"
}