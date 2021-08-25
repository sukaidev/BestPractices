package com.sukaidev.jetpacksamples.ui.home

import android.os.Bundle
import android.widget.TextView
import androidx.lifecycle.ViewModelProvider
import com.sukaidev.annotation.Destination
import com.sukaidev.jetpacksamples.base.BaseFragment
import com.sukaidev.jetpacksamples.databinding.FragmentHomeBinding
import com.sukaidev.runtime.Router

@Destination(Router.HOME_TAB_MAIN, true)
class HomeFragment : BaseFragment<FragmentHomeBinding>() {

    private lateinit var homeViewModel: HomeViewModel

    override fun onBindView(savedInstanceState: Bundle?) {
        homeViewModel =
            ViewModelProvider(this).get(HomeViewModel::class.java)
        val textView: TextView = binding.textHome
        homeViewModel.text.observe(viewLifecycleOwner, {
            textView.text = it
        })
    }
}