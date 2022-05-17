package com.sukaidev.jetpacksamples

import android.app.Application
import android.content.Context
import dagger.hilt.android.HiltAndroidApp

/**
 *
 * @author sukaidev
 * @since 2021/09/21
 */
@HiltAndroidApp
class App : Application() {

    companion object {
        lateinit var INSTANCE: App
    }

    override fun attachBaseContext(base: Context) {
        super.attachBaseContext(base)
        INSTANCE = this
    }
}