package com.sukaidev.net

import com.sukaidev.restful.Restful

/**
 *
 * @author sukaidev
 * @since 2021/09/20
 */
object ApiFactory {

    private val baseUrl = "https://xxx"
    private val restful = Restful(baseUrl, RetrofitCallFactory(baseUrl))

    private val services = HashMap<Class<*>, Any>()

    init {
        restful.addInterceptor(AuthInterceptor())
    }

    fun <T> create(service: Class<T>): T {
        if (!services.containsKey(service)) {
            services[service] = restful.create(service)!!
        }
        return services[service] as T
    }
}