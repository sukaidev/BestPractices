package com.sukaidev.restful

import java.io.IOException

/**
 * Created by sukaidev on 2021/09/05.
 * @author sukaidev
 */
interface RestCall<T> {

    @Throws(IOException::class)
    fun execute(): RestResponse<T>

    fun enqueue(callback: RestCallback<T>)

    interface Factory {

        fun newCall(request: RestRequest): RestCall<*>
    }
}