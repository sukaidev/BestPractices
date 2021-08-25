package com.sukaidev.runtime

import android.content.Context
import android.content.res.AssetManager
import android.util.Log
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import java.io.BufferedReader
import java.io.InputStream
import java.io.InputStreamReader

/**
 * Created by sukaidev on 2021/08/24.
 * 负责初始化路由功能
 * 对外开放get操作，允许获取一个[DestinationNode]
 *
 * @author sukaidev
 */
object Router {

    const val HOME_MAIN_PAGE = "main"

    const val HOME_TAB_MAIN = "main/tabs/home"

    const val HOME_TAB_DASHBOARD = "main/tabs/dashboard"

    const val HOME_TAB_NOTIFICATIONS = "main/tabs/notifications"

    private val destMap = HashMap<String, DestinationNode>()

    private const val TAG = "Router"

    private const val CONFIG_FILE_NAME = "navigation_graph_config.json"

    internal fun init(context: Context) {
        Log.d(TAG, "Router config parse begin.")
        val assetManager = context.applicationContext.assets

        var inputStream: InputStream? = null
        var inputStreamReader: InputStreamReader? = null
        var bufferedReader: BufferedReader? = null
        try {
            inputStream = assetManager.open(CONFIG_FILE_NAME)
            inputStreamReader = InputStreamReader(inputStream)
            bufferedReader = BufferedReader(inputStreamReader)

            val type = object : TypeToken<HashMap<String, DestinationNode>>() {}.type
            val nodes = Gson().fromJson<HashMap<String, DestinationNode>>(bufferedReader, type)
            destMap.putAll(nodes)
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            inputStream?.close()
            inputStreamReader?.close()
            bufferedReader?.close()

            Log.d(TAG, "Router config parse end.")
        }
    }

    operator fun get(key: String) = destMap[key]
}