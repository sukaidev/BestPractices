package com.sukaidev.compiler.binding

import java.lang.reflect.Field
import java.util.*
import javax.lang.model.element.Modifier
import javax.lang.model.element.TypeElement

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
class BindingActivity(private val typeElement: TypeElement) {

    val fields = TreeSet<Field>()

    val simpleName: String = typeElement.simpleName.toString()

    val packageName: String = typeElement.enclosingElement.asType().toString()

    val isAbstract = typeElement.modifiers.contains(Modifier.ABSTRACT)

    val isKotlin = typeElement.getAnnotation(Metadata::class.java) !=null

    override fun toString(): String {
        return "$packageName.$simpleName[${fields.joinToString()}]"
    }
}