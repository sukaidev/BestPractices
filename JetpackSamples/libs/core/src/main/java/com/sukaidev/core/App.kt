package com.sukaidev.core

import android.app.Application
import android.content.Context

/**
 * Created by suhaihong on 2022/05/30.
 * @author suhaihong
 */
open class App : Application() {

    companion object {
        lateinit var INSTANCE: App
    }

    override fun attachBaseContext(base: Context) {
        super.attachBaseContext(base)
        INSTANCE = this
    }
}