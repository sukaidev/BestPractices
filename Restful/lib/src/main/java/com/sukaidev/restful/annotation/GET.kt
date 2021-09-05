package com.sukaidev.restful.annotation

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 标记此方法为GET请求
 *
 * @author sukaidev
 */
@Target(AnnotationTarget.FUNCTION)
@Retention(AnnotationRetention.RUNTIME)
annotation class GET(val value: String)
