package com.sukaidev.core.bus

import androidx.lifecycle.*

/**
 * Created by sukaidev on 2021/08/30.
 *
 * 支持黏性订阅的LiveData
 *
 * [LiveData]默认情况下是黏性订阅的，此LiveData将observe拆分为
 * [observe]和[observeSticky]，以适配不同的使用场景
 *
 * @author sukaidev
 */
class StickyLiveData<T>(private val eventName: String) : LiveData<T>() {

    var version: Int = -1

    /**
     * 保存黏性订阅数据的最新值
     */
    var stickyData: T? = null
        private set

    /**
     * 设置黏性数据
     */
    fun setStickyData(stickyData: T) {
        this.stickyData = stickyData
        setValue(stickyData)
    }

    /**
     * 设置黏性数据
     *
     * 可在子线程调用
     */
    fun postStickyData(stickyData: T) {
        this.stickyData = stickyData
        postValue(stickyData)
    }

    override fun setValue(value: T) {
        version++
        super.setValue(value)
    }

    override fun postValue(value: T) {
        version++
        super.postValue(value)
    }

    override fun observe(owner: LifecycleOwner, observer: Observer<in T>) {
        observeSticky(owner, false, observer)
    }

    fun observeSticky(owner: LifecycleOwner, sticky: Boolean, observer: Observer<in T>) {
        owner.lifecycle.addObserver(LifecycleEventObserver { _, event ->
            if (event == Lifecycle.Event.ON_DESTROY) {
                LiveDataBus.remove(eventName)
            }
        })
        super.observe(owner, StickyDataObserver(this, sticky, observer))
    }
}