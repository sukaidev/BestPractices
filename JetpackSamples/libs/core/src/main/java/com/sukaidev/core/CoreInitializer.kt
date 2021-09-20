package com.sukaidev.core

import android.content.Context
import androidx.startup.Initializer
import com.sukaidev.core.cache.CacheManager

/**
 * 用于初始化Core模块
 * @author sukaidev
 * @since 2021/09/19
 */
class CoreInitializer : Initializer<Unit> {

    override fun create(context: Context) {
        CacheManager.init(context)
    }

    override fun dependencies(): MutableList<Class<out Initializer<*>>> = mutableListOf()
}