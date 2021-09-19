package com.sukaidev.core.cache

import androidx.annotation.NonNull
import androidx.room.Entity
import androidx.room.PrimaryKey

/**
 *
 * @author sukaidev
 * @since 2021/09/19
 */
@Entity(tableName = "cache")
class Cache {
    @NonNull
    @PrimaryKey(autoGenerate = false)
    var key: String = ""

    var data: ByteArray? = null
}