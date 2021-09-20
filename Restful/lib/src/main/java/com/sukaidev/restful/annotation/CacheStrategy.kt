package com.sukaidev.restful.annotation

/**
 * 定义缓存策略
 * @author sukaidev
 * @since 2021/09/20
 */
@Retention(AnnotationRetention.RUNTIME)
@Target(AnnotationTarget.FUNCTION, AnnotationTarget.VALUE_PARAMETER)
annotation class CacheStrategy(
    val value: Int = NET_ONLY
) {
    companion object {
        /**
         * 仅仅请求接口，即不缓存
         */
        const val NET_ONLY = 0

        /**
         * 请求接口时先读取本地缓存，再读取接口，接口成功后更新缓存
         */
        const val CACHE_FIRST = 1

        /**
         * 请求接口并更新缓存
         */
        const val NET_FIRST = 2
    }
}
