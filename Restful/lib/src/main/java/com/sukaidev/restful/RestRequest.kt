package com.sukaidev.restful

import androidx.annotation.IntDef
import com.sukaidev.restful.annotation.CacheStrategy
import java.lang.reflect.Type
import java.net.URLEncoder

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

    var cacheStrategyKey: String = ""

    var cacheStrategy: Int = CacheStrategy.NET_ONLY

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

    /**
     * 根据请求的url和参数构建CacheKey供外部使用
     */
    fun getCacheKey(): String {
        if (cacheStrategyKey.isNotEmpty()) {
            return cacheStrategyKey
        }
        val sb = StringBuilder()
        val endUrl = endPointUrl()
        sb.append(endUrl)
        if (endUrl.indexOf("?") > 0 || endUrl.indexOf("&") > 0) {
            sb.append("&")
        } else {
            sb.append("?")
        }

        cacheStrategyKey = if (parameters != null) {
            for ((key, value) in parameters!!) {
                try {
                    val encodeValue = URLEncoder.encode(value, "UTF-8")
                    sb.append(key).append("=").append(encodeValue).append("&")
                } catch (e: Exception) {
                }
            }
            sb.deleteCharAt(sb.length - 1)
            sb.toString()
        } else {
            endUrl
        }
        return cacheStrategyKey
    }

    override fun toString(): String {
        return String.format(
            "RestRequest:[\nHost:%s\nRelativeUrl:%s\nHttpMethod:%s\nisFormPost:%s\nHeaders:%s\nParameters:%s\nReturnType:%s\nCacheStrategyKey:%s\nCacheStrategy:%s\n]",
            host,
            relativeUrl,
            if (httpMethod == 0) "GET" else "POST",
            formPost,
            headers,
            parameters,
            returnType,
            cacheStrategyKey,
            cacheStrategy
        )
    }

    @IntDef(value = [METHOD.GET, METHOD.POST])
    annotation class METHOD {
        companion object {
            const val GET = 0
            const val POST = 1
        }
    }
}
