package com.sukaidev.viewbindingaptdemo

import android.app.Activity
import com.sukaidev.runtime.Utils

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
class MainActivity_ViewBinding {

    fun bind(activity: Activity) {
        if (activity is MainActivity) {
            val decorView = activity.window.decorView
            activity.button = Utils.findRequiredViewAsType(decorView, R.id.button_action)
        }
    }

}