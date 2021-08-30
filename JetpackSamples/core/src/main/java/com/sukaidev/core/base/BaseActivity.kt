package com.sukaidev.core.base

import android.os.Bundle
import android.view.LayoutInflater
import android.view.ViewGroup
import androidx.appcompat.app.AppCompatActivity
import androidx.viewbinding.ViewBinding
import java.lang.Boolean.TYPE
import java.lang.reflect.ParameterizedType

abstract class BaseActivity<BINDING : ViewBinding> : AppCompatActivity() {

    private var _binding: BINDING? = null

    protected val binding: BINDING
        get() = _binding!!

    abstract fun onBindView(savedInstanceState: Bundle?)

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        val viewBindingClass: Class<BINDING> = (javaClass.genericSuperclass as ParameterizedType)
            .actualTypeArguments[0] as Class<BINDING>
        val inflate = viewBindingClass.getMethod(
            "inflate",
            LayoutInflater::class.java,
            ViewGroup::class.java, TYPE
        )
        _binding = inflate.invoke(null, layoutInflater, null, false) as BINDING
        setContentView(binding.root)
        onBindView(savedInstanceState)
    }

    override fun onDestroy() {
        super.onDestroy()
        _binding = null
    }

    protected fun isBindingInitialized() = _binding != null
}