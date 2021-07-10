package com.sukaidev.annotations

/**
 * Created by sukaidev on 2021/07/02.
 *
 * 使用此注解标注的Activity/Fragment会生成对应的视图管理类.
 *
 * @author sukaidev
 */
@Target(AnnotationTarget.CLASS)
@Retention(AnnotationRetention.BINARY)
annotation class BindClass