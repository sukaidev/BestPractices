package com.sukaidev.runtime

import android.content.Context
import androidx.startup.Initializer

/**
 * Created by sukaidev on 2021/08/25.
 * 用于初始化路由组件.
 * @author sukaidev
 */
class RouterInitializer : Initializer<Unit> {

    override fun create(context: Context) {
        Router.init(context)
    }

    override fun dependencies(): MutableList<Class<out Initializer<*>>> = mutableListOf()
}