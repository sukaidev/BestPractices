package com.sukaidev.annotations

/**
 * Created by sukaidev on 2021/07/02.
 *
 * 使用此注解标注的View才会进行注入.
 *
 * @author sukaidev
 */
@Target(AnnotationTarget.FIELD)
@Retention(AnnotationRetention.BINARY)
annotation class BindView(val redId: Int)
