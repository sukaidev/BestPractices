package com.sukaidev.net

import com.sukaidev.restful.RestInterceptor

/**
 * 为每个请求附加token
 * @author sukaidev
 * @since 2021/09/20
 */
class AuthInterceptor : RestInterceptor {
    override fun intercept(chain: RestInterceptor.Chain): Boolean {
        if (chain.isRequestPeriod) {
            val request = chain.request()
            request.addHeader("auth-token", "token")
        } else if (chain.response() != null) {
            // TODO
        }
        return false
    }
}