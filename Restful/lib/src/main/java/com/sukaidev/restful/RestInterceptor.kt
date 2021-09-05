package com.sukaidev.restful

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 拦截器
 *
 * @author sukaidev
 */
interface RestInterceptor {

    fun intercept(chain: Chain): Boolean

    interface Chain {

        val isRequestPeriod: Boolean
            get() = false

        fun request(): RestRequest

        fun response(): RestResponse<*>?
    }
}