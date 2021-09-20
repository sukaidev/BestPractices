package com.sukaidev.core.bus

import androidx.lifecycle.Observer

/**
 * Created by sukaidev on 2021/08/30.
 *
 * 为处理黏性观察而实现的wrapper
 *
 * 保存了StickyLiveData的version值
 *
 * @author sukaidev
 */
class StickyDataObserver<T>(
    private val stickyLiveData: StickyLiveData<T>,
    private val sticky: Boolean,
    private val observer: Observer<in T>,
) : Observer<T> {

    private var lastVersion = stickyLiveData.version

    override fun onChanged(t: T?) {
        if (lastVersion >= stickyLiveData.version) {
            if (sticky && stickyLiveData.stickyData != null) {
                observer.onChanged(stickyLiveData.stickyData)
            }
            return
        }
        lastVersion = stickyLiveData.version
        observer.onChanged(t)
    }
}