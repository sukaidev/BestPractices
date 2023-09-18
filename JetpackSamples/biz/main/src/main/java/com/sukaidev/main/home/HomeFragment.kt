package com.sukaidev.main.home

import android.os.Bundle
import androidx.core.view.isVisible
import coil.load
import com.sukaidev.annotation.Destination
import com.sukaidev.core.base.BaseFragment
import com.sukaidev.main.databinding.FragmentHomeBinding
import com.sukaidev.runtime.Router
import javax.inject.Inject

@Destination(Router.HOME_TAB_MAIN, true)
class HomeFragment : BaseFragment<FragmentHomeBinding>() {

    @Inject
    lateinit var homeViewModel: HomeViewModel

    private val url =
        "https://p7.itc.cn/q_70/images01/20220420/d3e99c056bf5467f85c2c0ea01b4be61.jpeg"

    override fun onBindView(savedInstanceState: Bundle?) {
        binding.btnLoad.setOnClickListener {
            binding.ivAvatar.load(url)
            it.isVisible = false
        }
    }
}