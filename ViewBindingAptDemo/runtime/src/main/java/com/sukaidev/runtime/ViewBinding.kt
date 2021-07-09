package com.sukaidev.runtime

import android.app.Activity
import android.app.Application
import kotlin.collections.LinkedHashMap

/**
 * Created by sukaidev on 2021/07/03.
 * @author sukaidev
 */
class ViewBinding {

    private val BINDINGS = LinkedHashMap<String, UnBinder>()

    private val activityLifecycleCallback = BindingActivityLifecycleCallback()

    fun init(app: Application) {
        app.registerActivityLifecycleCallbacks(activityLifecycleCallback)
    }

    fun bind(activity: Activity) {
        val activityClass = activity::class.java
        val bindingClassName = activity.javaClass.name + BINDING_CLASS_POSTFIX
        var unBinder = BINDINGS[bindingClassName]
        try {
            if (unBinder == null) {
                val bindingClass = Class.forName(activityClass.name)?.classLoader?.loadClass(bindingClassName) ?: return
                unBinder = bindingClass.getConstructor(activityClass).newInstance(activity) as UnBinder
                BINDINGS[bindingClassName] = unBinder
            }
            unBinder.bind()
        } catch (e: ClassNotFoundException) {
            e.printStackTrace()
            return
        }
    }

    fun unBind(activity: Activity) {
        val bindingClassName = activity.javaClass.name + BINDING_CLASS_POSTFIX

        val unBinder = BINDINGS[bindingClassName] ?: return
        unBinder.unBind()

        BINDINGS.remove(bindingClassName)
    }

    companion object {

        const val BINDING_CLASS_POSTFIX = "_ViewBinding"

        val INSTANCE: ViewBinding by lazy { ViewBinding() }
    }
}