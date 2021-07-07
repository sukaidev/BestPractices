package com.sukaidev.annotations

import javax.annotation.processing.SupportedSourceVersion
import javax.lang.model.SourceVersion

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
@Target(AnnotationTarget.FIELD)
@Retention(AnnotationRetention.BINARY)
@SupportedSourceVersion(SourceVersion.RELEASE_8)
annotation class BindView(val redId: Int)
