package com.sukaidev.annotation

@Target(AnnotationTarget.CLASS)
@Retention(AnnotationRetention.BINARY)
annotation class Navigate(val path: String, val asStarter: Boolean)