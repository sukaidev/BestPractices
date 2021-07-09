package com.sukaidev.viewbindingaptdemo

import android.app.Activity
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.AppCompatTextView
import com.sukaidev.runtime.Utils

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
//final class MainActivity_ViewBinding(
//    private var activity: Activity?,
//) {
//
//    private val decorView = activity!!.window.decorView
//
//    private var button: AppCompatButton? = Utils.findRequiredViewAsType(decorView, 2131230808)
//    private var tvHello: AppCompatTextView? = Utils.findRequiredViewAsType(decorView, 2131230808)
//
//    fun bind(activity: Activity) {
//        if (activity is MainActivity) {
//            activity.button = button!!
//            activity.tvHello = tvHello!!
//        }
//    }
//
//    fun unBind() {
//        activity = null
//
//        button = null
//        tvHello = null
//    }
//}