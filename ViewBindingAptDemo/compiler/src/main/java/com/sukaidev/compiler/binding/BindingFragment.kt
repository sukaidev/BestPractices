package com.sukaidev.compiler.binding

import com.sukaidev.compiler.binding.entity.BindingView
import java.util.*
import javax.lang.model.element.Modifier
import javax.lang.model.element.TypeElement

/**
 * Created by sukaidev on 2021/07/02.
 * @author sukaidev
 */
class BindingFragment(val typeElement: TypeElement) {

    val bindingViews = TreeSet<BindingView>()

    val simpleName: String = typeElement.simpleName.toString()

    val packageName: String = typeElement.enclosingElement.asType().toString()

    val isAbstract = typeElement.modifiers.contains(Modifier.ABSTRACT)

    val isKotlin = typeElement.getAnnotation(Metadata::class.java) != null

    val builder = BindingFragmentBuilder(this)

    override fun toString(): String {
        return "$packageName.$simpleName[${bindingViews.joinToString()}]"
    }
}