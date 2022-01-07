package com.sukaidev.main.net

import com.sukaidev.restful.RestCall
import com.sukaidev.restful.annotation.CacheStrategy
import com.sukaidev.restful.annotation.GET
import com.sukaidev.restful.annotation.Path

/**
 *
 * @author sukaidev
 * @since 2021/09/20
 */
interface WanAndroidApi {

    @GET("/article/list/{page}/json")
    @CacheStrategy(CacheStrategy.CACHE_FIRST)
    fun getWanAndroidHomePage(@Path("page") page: Int): RestCall<Any>
}