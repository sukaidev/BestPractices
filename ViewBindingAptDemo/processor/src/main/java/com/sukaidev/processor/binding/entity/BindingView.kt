package com.sukaidev.processor.binding.entity

import com.squareup.kotlinpoet.*
import com.squareup.kotlinpoet.ParameterizedTypeName.Companion.parameterizedBy
import com.sun.tools.javac.code.Symbol
import javax.lang.model.type.ArrayType
import javax.lang.model.type.TypeKind

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
open class BindingView(val symbol: Symbol.VarSymbol) : Comparable<BindingView> {

    val name = symbol.qualifiedName.toString()

    val isPrivate = symbol.isPrivate

    override fun toString(): String {
        return "$name:${symbol.type}"
    }

    override fun compareTo(other: BindingView): Int {
        return name.compareTo(other.name)
    }

    open fun asKotlinTypeName(): TypeName = when (symbol.type.kind) {
        TypeKind.BOOLEAN -> BOOLEAN
        TypeKind.BYTE -> BYTE
        TypeKind.SHORT -> SHORT
        TypeKind.INT -> INT
        TypeKind.LONG -> LONG
        TypeKind.CHAR -> CHAR
        TypeKind.FLOAT -> FLOAT
        TypeKind.DOUBLE -> DOUBLE
        TypeKind.DECLARED -> if (toString() == "java.lang.String") STRING else symbol.type.asTypeName()
        TypeKind.ARRAY -> {
            val arrayType = this as ArrayType
            when (arrayType.componentType.kind) {
                TypeKind.BOOLEAN -> BOOLEAN_ARRAY
                TypeKind.BYTE -> BYTE_ARRAY
                TypeKind.SHORT -> SHORT_ARRAY
                TypeKind.INT -> INT_ARRAY
                TypeKind.LONG -> LONG_ARRAY
                TypeKind.CHAR -> CHAR_ARRAY
                TypeKind.FLOAT -> FLOAT_ARRAY
                TypeKind.DOUBLE -> DOUBLE_ARRAY
                TypeKind.DECLARED -> if (toString() == "java.lang.String[]") STRING_ARRAY else symbol.type.asTypeName()
                else -> symbol.type.asTypeName()
            }
        }
        else -> symbol.type.asTypeName()
    }
}

private val STRING_ARRAY = ClassName("kotlin", "Array").parameterizedBy(com.sukaidev.processor.binding.const.STRING)