package com.sukaidev.net

import android.util.Log
import com.sukaidev.restful.RestInterceptor

/**
 * Created by suhaihong on 2022/05/16.
 * @author suhaihong
 */
class TestInterceptor : RestInterceptor {

    override fun intercept(chain: RestInterceptor.Chain): Boolean {
        val request = chain.request()
        val response = chain.response()
        Log.d(TAG, String.format("request:%s , response:%s", request, response))
        return false
    }

    companion object {
        private const val TAG = "TestInterceptor"
    }
}