package com.sukaidev.restful

import androidx.annotation.IntDef
import java.lang.reflect.Type

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 请求
 *
 * @author sukaidev
 */
open class RestRequest {

    @METHOD
    var httpMethod: Int = 0

    var host: String? = null

    var relativeUrl: String? = null

    var headers: MutableMap<String, String>? = null

    var parameters: MutableMap<String, String>? = null

    var returnType: Type? = null

    var formPost: Boolean = true

    fun endPointUrl(): String {
        if (relativeUrl == null) throw  IllegalStateException("relative url must not be null.")
        if (!relativeUrl!!.startsWith("/")) {
            return host + relativeUrl
        }
        val index = host?.indexOf("/") ?: 0
        return host?.substring(0, index) + relativeUrl
    }

    fun addHeader(name: String, value: String) {
        if (headers == null) {
            headers = mutableMapOf()
        }
        headers!![name] = value
    }

    @IntDef(value = [METHOD.GET, METHOD.POST])
    annotation class METHOD {
        companion object {
            const val GET = 0
            const val POST = 1
        }
    }
}
