package com.sukaidev.core.bus

import java.util.concurrent.ConcurrentHashMap

/**
 * Created by sukaidev on 2021/08/30.<p>
 *
 * 基于LiveData实现的事件总线
 *
 * @author sukaidev
 */
object LiveDataBus {

    private val eventMap = ConcurrentHashMap<String, StickyLiveData<*>>()

    @Suppress("UNCHECKED_CAST")
    fun <T> with(eventName: String): StickyLiveData<T> {
        var liveData = eventMap[eventName]
        if (liveData == null) {
            liveData = StickyLiveData<T>(eventName)
            eventMap[eventName] = liveData
        }
        return liveData as StickyLiveData<T>
    }

    fun remove(eventName: String) {
        eventMap.remove(eventName)
    }

}