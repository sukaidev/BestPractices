package com.sukaidev.restful.annotation

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 标记此方法的请求参数（占位符）
 *
 * @author sukaidev
 */
@Target(AnnotationTarget.VALUE_PARAMETER)
@Retention(AnnotationRetention.RUNTIME)
annotation class Path(val value:String)
