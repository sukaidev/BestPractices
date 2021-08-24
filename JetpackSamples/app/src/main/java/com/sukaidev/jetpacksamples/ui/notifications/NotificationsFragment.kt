package com.sukaidev.jetpacksamples.ui.notifications

import android.os.Bundle
import android.widget.TextView
import androidx.lifecycle.Observer
import androidx.lifecycle.ViewModelProvider
import com.sukaidev.annotation.Destination
import com.sukaidev.jetpacksamples.base.BaseFragment
import com.sukaidev.jetpacksamples.databinding.FragmentNotificationsBinding
import com.sukaidev.jetpacksamples.navigation.Navigation

@Destination(Navigation.HOME_TAB_NOTIFICATIONS)
class NotificationsFragment : BaseFragment<FragmentNotificationsBinding>() {

    private lateinit var notificationsViewModel: NotificationsViewModel

    override fun onBindView(savedInstanceState: Bundle?) {
        notificationsViewModel =
            ViewModelProvider(this).get(NotificationsViewModel::class.java)

        val textView: TextView = binding.textNotifications
        notificationsViewModel.text.observe(viewLifecycleOwner, Observer {
            textView.text = it
        })
    }
}