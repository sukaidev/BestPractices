package com.sukaidev.jetpacksamples.ui.dashboard

import android.os.Bundle
import android.widget.TextView
import androidx.lifecycle.ViewModelProvider
import com.sukaidev.annotation.Destination
import com.sukaidev.jetpacksamples.base.BaseFragment
import com.sukaidev.jetpacksamples.databinding.FragmentDashboardBinding
import com.sukaidev.runtime.Router

@Destination(Router.HOME_TAB_DASHBOARD)
class DashboardFragment : BaseFragment<FragmentDashboardBinding>() {

    private lateinit var dashboardViewModel: DashboardViewModel

    override fun onBindView(savedInstanceState: Bundle?) {
        dashboardViewModel =
            ViewModelProvider(this).get(DashboardViewModel::class.java)

        val textView: TextView = binding.textDashboard
        dashboardViewModel.text.observe(viewLifecycleOwner, {
            textView.text = it
        })
    }
}