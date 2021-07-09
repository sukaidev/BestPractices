package com.sukaidev.runtime

import android.app.Activity
import android.app.Application
import androidx.fragment.app.Fragment

/**
 * Created by sukaidev on 2021/07/03.
 * @author sukaidev
 */
class ViewBinding {

    private val BINDINGS = LinkedHashMap<String, UnBinder>()

    private val activityLifecycleCallback = BindingActivityLifecycleCallback()
    private val fragmentLifecycleCallback = BindingFragmentLifecycleCallback()

    fun init(app: Application) {
        app.registerActivityLifecycleCallbacks(activityLifecycleCallback)
    }

    fun bind(source: Any) {
        if (source !is Activity && source !is Fragment) return

        val sourceClass = source::class.java
        val bindingClassName = source.javaClass.name + BINDING_CLASS_POSTFIX
        var unBinder = BINDINGS[bindingClassName]
        try {
            if (unBinder == null) {
                val bindingClass = Class.forName(sourceClass.name)?.classLoader?.loadClass(bindingClassName) ?: return
                unBinder = bindingClass.getConstructor(sourceClass).newInstance(source) as UnBinder
                BINDINGS[bindingClassName] = unBinder
            }
            unBinder.bind()
        } catch (e: ClassNotFoundException) {
            e.printStackTrace()
            return
        }

        if (source is Fragment) {
            source.parentFragmentManager.registerFragmentLifecycleCallbacks(fragmentLifecycleCallback, false)
        }
    }


    fun unBind(source: Any) {
        if (source !is Activity && source !is Fragment) return

        val bindingClassName = source.javaClass.name + BINDING_CLASS_POSTFIX

        val unBinder = BINDINGS[bindingClassName] ?: return
        unBinder.unBind()

        BINDINGS.remove(bindingClassName)

        if (source is Fragment) {
            source.parentFragmentManager.unregisterFragmentLifecycleCallbacks(fragmentLifecycleCallback)
        }
    }

    companion object {

        const val BINDING_CLASS_POSTFIX = "_ViewBinding"

        val INSTANCE: ViewBinding by lazy { ViewBinding() }
    }
}