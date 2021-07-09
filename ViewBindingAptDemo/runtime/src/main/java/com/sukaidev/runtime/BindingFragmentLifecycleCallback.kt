package com.sukaidev.runtime

import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager

/**
 * Created by sukaidev on 2021/07/03.
 * 实现Fragment的自动解绑.
 * @author sukaidev
 */
class BindingFragmentLifecycleCallback : FragmentManager.FragmentLifecycleCallbacks() {

    override fun onFragmentViewDestroyed(fm: FragmentManager, f: Fragment) {
        super.onFragmentViewDestroyed(fm, f)
        ViewBinding.INSTANCE.unBind(f)
    }
}