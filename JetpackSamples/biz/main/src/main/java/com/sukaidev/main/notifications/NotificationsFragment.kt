package com.sukaidev.main.notifications

import android.os.Bundle
import android.widget.TextView
import androidx.lifecycle.ViewModelProvider
import com.sukaidev.annotation.Destination
import com.sukaidev.core.base.BaseFragment
import com.sukaidev.main.databinding.FragmentNotificationsBinding
import com.sukaidev.runtime.Router
import javax.inject.Inject

@Destination(Router.HOME_TAB_NOTIFICATIONS)
class NotificationsFragment : BaseFragment<FragmentNotificationsBinding>() {

    @Inject
    lateinit var notificationsViewModel: NotificationsViewModel

    override fun onBindView(savedInstanceState: Bundle?) {
        val textView: TextView = binding.textNotifications
        notificationsViewModel.text.observe(viewLifecycleOwner) {
            textView.text = it
        }
    }
}