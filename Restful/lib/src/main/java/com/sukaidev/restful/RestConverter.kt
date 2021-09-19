package com.sukaidev.restful

import java.lang.reflect.Type

/**
 * 解析响应体为指定类型
 * @author sukaidev
 * @since 2021/09/19
 */
interface RestConverter {

    fun <T> convert(rawData: String, dataType: Type): RestResponse<T>

}