package com.sukaidev.runtime

/**
 * Created by sukaidev on 2021/07/03.
 * @author sukaidev
 */
interface UnBinder {

    fun bind(): UnBinder?

    fun unBind()
}