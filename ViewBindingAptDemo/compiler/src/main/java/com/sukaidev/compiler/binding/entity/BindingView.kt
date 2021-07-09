package com.sukaidev.compiler.binding.entity

import com.squareup.javapoet.TypeName
import com.squareup.kotlinpoet.*
import com.squareup.kotlinpoet.ParameterizedTypeName.Companion.parameterizedBy
import com.sun.tools.javac.code.Symbol
import javax.lang.model.type.ArrayType
import javax.lang.model.type.TypeKind

typealias JavaTypeName = TypeName
typealias  KotlinTypeName = com.squareup.kotlinpoet.TypeName

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

    fun asJavaTypeName(): JavaTypeName = TypeName.get(symbol.type)

    open fun asKotlinTypeName(): KotlinTypeName = when (symbol.type.kind) {
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

private val STRING: ClassName = ClassName("kotlin", "String")
private val STRING_ARRAY = ClassName("kotlin", "Array").parameterizedBy(STRING)
private val LONG_ARRAY: ClassName = ClassName("kotlin", "LongArray")
private val INT_ARRAY: ClassName = ClassName("kotlin", "IntArray")
private val SHORT_ARRAY: ClassName = ClassName("kotlin", "ShortArray")
private val BYTE_ARRAY: ClassName = ClassName("kotlin", "ByteArray")
private val CHAR_ARRAY: ClassName = ClassName("kotlin", "CharArray")
private val BOOLEAN_ARRAY: ClassName = ClassName("kotlin", "BooleanArray")
private val FLOAT_ARRAY: ClassName = ClassName("kotlin", "FloatArray")
private val DOUBLE_ARRAY: ClassName = ClassName("kotlin", "DoubleArray")