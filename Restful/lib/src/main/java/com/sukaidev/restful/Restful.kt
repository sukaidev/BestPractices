package com.sukaidev.restful

import java.lang.reflect.Method
import java.lang.reflect.Proxy
import java.util.concurrent.ConcurrentHashMap

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 外观类
 *
 * @author sukaidev
 */
class Restful constructor(private val baseUrl: String, callFactory: RestCall.Factory) {

    private var interceptors: MutableList<RestInterceptor> = mutableListOf()
    private var methodService: ConcurrentHashMap<Method, RequestBuilder> = ConcurrentHashMap()
    private var scheduler: Scheduler = Scheduler(callFactory, interceptors)

    fun addInterceptor(interceptor: RestInterceptor) {
        interceptors.add(interceptor)
    }

    @Suppress("UNCHECKED_CAST")
    fun <T> create(service: Class<T>): T {
        return Proxy.newProxyInstance(
            service.classLoader,
            arrayOf<Class<*>>(service)
        ) { proxy, method, args ->
            var methodParser: RequestBuilder? = methodService[method]
            if (methodParser == null) {
                methodParser = RequestBuilder.parse(baseUrl, method, args ?: arrayOf())
                methodService[method] = methodParser
            }
            scheduler.newCall(methodParser.build())
        } as T
    }
}