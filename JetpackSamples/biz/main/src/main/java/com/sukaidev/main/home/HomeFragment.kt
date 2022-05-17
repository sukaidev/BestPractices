package com.sukaidev.main.home

import android.os.Bundle
import android.widget.Toast
import com.sukaidev.annotation.Destination
import com.sukaidev.core.base.BaseFragment
import com.sukaidev.core.ext.defaultKV
import com.sukaidev.main.databinding.FragmentHomeBinding
import com.sukaidev.runtime.Router
import javax.inject.Inject

@Destination(Router.HOME_TAB_MAIN, true)
class HomeFragment : BaseFragment<FragmentHomeBinding>() {

    @Inject
    lateinit var homeViewModel: HomeViewModel

    override fun onBindView(savedInstanceState: Bundle?) {

    }
}