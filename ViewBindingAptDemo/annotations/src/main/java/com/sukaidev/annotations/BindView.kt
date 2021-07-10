package com.sukaidev.annotations

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
@Target(AnnotationTarget.FIELD)
@Retention(AnnotationRetention.BINARY)
annotation class BindView(val redId: Int)
