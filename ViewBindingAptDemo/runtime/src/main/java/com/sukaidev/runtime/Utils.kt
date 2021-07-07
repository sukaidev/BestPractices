package com.sukaidev.runtime

import android.view.View

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
object Utils {

    fun <T> findRequiredViewAsType(contentView: View, viewId: Int): T {
        return contentView.findViewById(viewId)
    }
}