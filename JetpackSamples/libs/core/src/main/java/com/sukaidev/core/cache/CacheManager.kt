package com.sukaidev.core.cache

import android.content.Context
import java.io.ByteArrayInputStream
import java.io.ByteArrayOutputStream
import java.io.ObjectInputStream
import java.io.ObjectOutputStream

/**
 *
 * @author sukaidev
 * @since 2021/09/19
 */
object CacheManager {

    /**
     * 添加缓存
     * @param key 缓存的唯一标识，例如网络请求URL
     * @param body 缓存内容，例如网络请求的ResponseBody
     */
    fun <T> saveCache(context: Context, key: String, body: T) {
        val cache = Cache()
        cache.key = key
        cache.data = toByteArray(body)
        CacheDatabase.get(context).cacheDao.saveCache(cache)
    }

    /**
     * 获取缓存
     * @param key 缓存的唯一标识，例如网络请求URL
     */
    fun <T> getCache(context: Context, key: String): T? {
        val cache = CacheDatabase.get(context).cacheDao.getCache(key)
        return (if (cache?.data != null) toObject(cache?.data) else null) as? T
    }

    /**
     * 删除缓存
     * @param key 缓存的唯一标识，例如网络请求URL
     */
    fun deleteCache(context: Context, key: String) {
        val cache = Cache()
        cache.key = key
        CacheDatabase.get(context).cacheDao.deleteCache(cache)
    }

    /**
     * 把对象转换成字节数组
     */
    private fun <T> toByteArray(body: T): ByteArray {
        var baos: ByteArrayOutputStream? = null
        var oos: ObjectOutputStream? = null
        try {
            baos = ByteArrayOutputStream()
            oos = ObjectOutputStream(baos)
            oos.writeObject(body)
            oos.flush()
            return baos.toByteArray()
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            baos?.close()
            oos?.close()
        }
        return ByteArray(0)
    }

    /**
     * 把字节数组转换成对象
     */
    private fun toObject(data: ByteArray?): Any? {
        var bais: ByteArrayInputStream? = null
        var ois: ObjectInputStream? = null

        try {
            bais = ByteArrayInputStream(data)
            ois = ObjectInputStream(bais)
            return ois.readObject()
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            bais?.close()
            ois?.close()
        }
        return null
    }
}