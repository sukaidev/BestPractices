package com.sukaidev.processor.util

import javax.lang.model.element.Element
import javax.lang.model.type.TypeMirror
import javax.lang.model.util.Types

/**
 * Created by sukaidev on 2021/07/03.
 *
 * 定义扩展方法
 * @author sukaidev
 */

/**
 * 判断是否属于子Type
 */
fun Element.isSubType(superType: Element, types: Types) = types.isSubtype(asType(), superType.asType())

fun Element.isSubType(superType: TypeMirror, types: Types) = types.isSubtype(asType(), superType)

fun TypeMirror.isSubType(superType: TypeMirror, types: Types) = types.isSubtype(this, superType)
