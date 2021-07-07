package com.sukaidev.runtime

import android.app.Activity
import android.app.Application
import android.os.Bundle

/**
 * Created by sukaidev on 2021/07/03.
 * @author sukaidev
 */
class ViewBindingLifecycleCallback : Application.ActivityLifecycleCallbacks {

    override fun onActivityCreated(activity: Activity, savedInstanceState: Bundle?) {
    }

    override fun onActivityPostCreated(activity: Activity, savedInstanceState: Bundle?) {
        super.onActivityPostCreated(activity, savedInstanceState)
        ViewBinding.INSTANCE.performOnBind(activity)
    }

    override fun onActivityStarted(activity: Activity) {
    }

    override fun onActivityResumed(activity: Activity) {
    }

    override fun onActivityPaused(activity: Activity) {
    }

    override fun onActivityStopped(activity: Activity) {
    }

    override fun onActivitySaveInstanceState(activity: Activity, outState: Bundle?) {
    }

    override fun onActivityDestroyed(activity: Activity) {
    }
}