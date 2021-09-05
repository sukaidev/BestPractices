package com.sukaidev.restful

/**
 * Created by sukaidev on 2021/09/05.
 * @author sukaidev
 */
interface RestCallback<T> {

    fun onSuccess(response: RestResponse<T>)

    fun onFailed(throwable: Throwable)
}