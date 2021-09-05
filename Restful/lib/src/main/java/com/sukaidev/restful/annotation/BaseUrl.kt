package com.sukaidev.restful.annotation

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 标记此方法请求的Host
 *
 * @author sukaidev
 */
@Target(AnnotationTarget.FUNCTION)
@Retention(AnnotationRetention.RUNTIME)
annotation class BaseUrl(val value:String)
