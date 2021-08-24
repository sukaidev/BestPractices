package com.sukaidev.annotation

@Target(AnnotationTarget.CLASS)
@Retention(AnnotationRetention.BINARY)
annotation class Destination(val path: String, val asStarter: Boolean = false)