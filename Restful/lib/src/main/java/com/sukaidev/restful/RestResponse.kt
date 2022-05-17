package com.sukaidev.restful

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 响应
 *
 * @author sukaidev
 */
open class RestResponse<T> {

    companion object {
        const val SUCCESS: Int = 0
    }

    /**
     * 业务层面的状态码
     */
    var code = 0

    /**
     * 请求成功时返回的数据
     */
    var data: T? = null

    /**
     * 错误信息
     */
    var msg: String? = null

    /**
     * 错误状态下的数据
     */
    var errorData: Map<String, String>? = null

    /**
     * 原始数据
     */
    var origin: String? = null


    override fun toString(): String {
        return "RestResponse:[\ncode:$code\ndata:$data\nmsg:$msg\nerrorData:$errorData\norigin:$origin\n]"
    }
}