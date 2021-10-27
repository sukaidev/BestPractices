package com.sukaidev.main

import android.content.Context
import androidx.startup.Initializer

/**
 * 初始化App首页.
 * @author sukaidev
 * @since 2021/10/27
 */
class MainInitializer : Initializer<Unit> {

    override fun create(context: Context) {

    }

    override fun dependencies(): MutableList<Class<out Initializer<*>>> {
        return mutableListOf()
    }
}