package com.sukaidev.restful

import androidx.constraintlayout.solver.Cache
import com.sukaidev.restful.annotation.CacheStrategy
import java.util.concurrent.atomic.AtomicInteger

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 代理RestCall实现拦截器的分发
 *
 * @author sukaidev
 */
class Scheduler(
    private val callFactory: RestCall.Factory,
    private val interceptors: MutableList<RestInterceptor>
) {

    fun newCall(request: RestRequest): RestCall<*> {
        val newCall = callFactory.newCall(request)
        return CallProxy(newCall, request)
    }

    internal inner class CallProxy<T>(
        private val delegate: RestCall<T>,
        private val request: RestRequest
    ) : RestCall<T> {

        override fun execute(): RestResponse<T> {
            dispatchInterceptor(request, null)
            val response = delegate.execute()
            dispatchInterceptor(request, response)
            return response
        }

        override fun enqueue(callback: RestCallback<T>) {
            dispatchInterceptor(request, null)
            delegate.enqueue(object : RestCallback<T> {
                override fun onSuccess(response: RestResponse<T>) {
                    dispatchInterceptor(request, response)
                    callback.onSuccess(response)
                }

                override fun onFailed(throwable: Throwable) {
                    callback.onFailed(throwable)
                }
            })
        }

        private fun dispatchInterceptor(request: RestRequest, response: RestResponse<T>?) {

        }

        internal inner class InterceptorChain(
            private val request: RestRequest,
            private val response: RestResponse<T>?
        ) : RestInterceptor.Chain {

            var callIndex = AtomicInteger(0)

            override val isRequestPeriod: Boolean
                get() = response == null

            override fun request() = request

            override fun response() = response

            fun dispatch() {
                val interceptor = interceptors[callIndex.getAndIncrement()]
                val intercept = interceptor.intercept(this)
                if (!intercept && callIndex.get() < interceptors.size) {
                    dispatch()
                }
            }
        }
    }
}