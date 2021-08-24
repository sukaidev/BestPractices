package com.sukaidev.jetpacksamples.base

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.viewbinding.ViewBinding
import java.lang.Boolean.TYPE
import java.lang.reflect.ParameterizedType

abstract class BaseFragment<BINDING : ViewBinding> : Fragment() {

    private var _binding: BINDING? = null

    protected val binding: BINDING
        get() = _binding!!

    abstract fun onBindView(savedInstanceState: Bundle?)

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val viewBindingClass: Class<BINDING> = (javaClass.genericSuperclass as ParameterizedType)
            .actualTypeArguments[0] as Class<BINDING>
        val inflate = viewBindingClass.getMethod(
            "inflate",
            LayoutInflater::class.java,
            ViewGroup::class.java, TYPE
        )
        _binding = inflate.invoke(null, layoutInflater, null, false) as BINDING
        return binding.root
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        onBindView(savedInstanceState)
    }

    override fun onDestroyView() {
        super.onDestroyView()
        _binding = null
    }

    protected fun isBindingInitialized() = _binding != null
}