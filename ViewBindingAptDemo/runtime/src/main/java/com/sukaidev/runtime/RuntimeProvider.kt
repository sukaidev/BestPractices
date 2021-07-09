package com.sukaidev.runtime

import android.app.Application
import android.content.ContentProvider
import android.content.ContentValues
import android.net.Uri

/**
 * Created by sukaidev on 2021/07/03.
 *
 * 用于初始化Runtime.
 *
 * @author sukaidev
 */
class RuntimeProvider : ContentProvider() {

    override fun onCreate(): Boolean {
        ViewBinding.INSTANCE.init(context.applicationContext as Application)
        return true
    }

    override fun query(uri: Uri?, projection: Array<out String>?, selection: String?, selectionArgs: Array<out String>?, sortOrder: String?) = null

    override fun getType(uri: Uri?) = null

    override fun insert(uri: Uri?, values: ContentValues?) = null

    override fun delete(uri: Uri?, selection: String?, selectionArgs: Array<out String>?) = 0

    override fun update(uri: Uri?, values: ContentValues?, selection: String?, selectionArgs: Array<out String>?) = 0
}