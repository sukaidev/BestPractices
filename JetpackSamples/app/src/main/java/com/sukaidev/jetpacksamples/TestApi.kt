package com.sukaidev.jetpacksamples

import com.sukaidev.restful.RestCall
import com.sukaidev.restful.annotation.CacheStrategy
import com.sukaidev.restful.annotation.GET
import com.sukaidev.restful.annotation.Path
import javax.inject.Inject

/**
 *
 * @author sukaidev
 * @since 2021/09/20
 */
interface TestApi {

    @GET("/article/list/{page}/json")
    @CacheStrategy(CacheStrategy.CACHE_FIRST)
    fun getWanAndroidHomePage(@Path("page") page: Int): RestCall<Any>
}