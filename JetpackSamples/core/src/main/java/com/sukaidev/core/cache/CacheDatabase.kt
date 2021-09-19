package com.sukaidev.core.cache

import android.content.Context
import androidx.room.Database
import androidx.room.Room
import androidx.room.RoomDatabase

/**
 * 基于Room的App缓存数据库
 *
 * 用于处理API数据的缓存
 * @author sukaidev
 * @since 2021/09/19
 */
@Database(entities = [CacheDatabase::class], version = 1)
abstract class CacheDatabase : RoomDatabase() {

    abstract val cacheDao: CacheDao

    companion object {
        private var INSTANCE: CacheDatabase? = null

        fun get(context: Context) = INSTANCE ?: synchronized(this) {
            if (INSTANCE != null) {
                INSTANCE = Room.databaseBuilder(
                    context.applicationContext,
                    CacheDatabase::class.java,
                    "api_cache"
                ).build()
            }
            INSTANCE!!
        }
    }
}