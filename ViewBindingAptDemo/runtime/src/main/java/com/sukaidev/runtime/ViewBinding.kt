package com.sukaidev.runtime

import android.app.Activity
import android.app.Application

/**
 * Created by sukaidev on 2021/07/03.
 * @author sukaidev
 */
class ViewBinding {

    private val BINDINGS = LinkedHashMap<String, Class<*>>()

    private val activityLifecycleCallback = ViewBindingLifecycleCallback()

    fun init(app: Application) {
        app.registerActivityLifecycleCallbacks(activityLifecycleCallback)
    }

    fun performOnBind(activity: Activity) {
        val bindingClassName = activity.javaClass.name + BINDING_CLASS_POSTFIX
        var bindingClass = BINDINGS[bindingClassName]
        if (bindingClass == null) {
            bindingClass = Class.forName(bindingClassName)
            BINDINGS[bindingClassName] = bindingClass
        }
        bindingClass?.getDeclaredMethod("bind", Activity::class.java)?.invoke(null, activity)
    }

    fun performOnUnBind(activity: Activity) {
        val bindingClassName = activity.javaClass.name + BINDING_CLASS_POSTFIX
        BINDINGS.remove(bindingClassName)
    }

    companion object {

        const val BINDING_CLASS_POSTFIX = "_ViewBinding"

        val INSTANCE: ViewBinding by lazy { ViewBinding() }
    }
}