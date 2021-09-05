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

    var parameters: MutableMap<String, Any>? = null

    var returnType: Type? = null


    @IntDef(value = [METHOD.GET, METHOD.POST])
    internal annotation class METHOD {
        companion object {
            const val GET = 0
            const val POST = 1
        }
    }
}
