package com.sukaidev.runtime

import android.content.ComponentName
import android.content.Context
import android.util.Log
import androidx.fragment.app.FragmentActivity
import androidx.navigation.*
import androidx.navigation.Navigation.findNavController
import androidx.navigation.fragment.DialogFragmentNavigator
import androidx.navigation.fragment.FragmentNavigator
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
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

    private const val NAV_CONFIG_FILE_NAME = "navigation_graph_config.json"
    private const val BOTTOM_CONFIG_FILE_NAME = "main_tabs_config.json"

    internal fun init(context: Context) {
        parseNavConfigFile(context)
    }

    private fun parseNavConfigFile(context: Context) {
        Log.d(TAG, "Router config parse begin.")

        val assetManager = context.applicationContext.assets

        var inputStream: InputStream? = null
        var inputStreamReader: InputStreamReader? = null
        try {
            inputStream = assetManager.open(NAV_CONFIG_FILE_NAME)
            inputStreamReader = InputStreamReader(inputStream)

            val type = object : TypeToken<HashMap<String, DestinationNode>>() {}.type
            val nodes = Gson().fromJson<HashMap<String, DestinationNode>>(inputStreamReader, type)
            destMap.putAll(nodes)
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            inputStream?.close()
            inputStreamReader?.close()

            Log.d(TAG, "Router config parse end.")
        }
    }

    private fun parseBottomNavViewConfigFile(context: Context): BottomBar? {
        Log.d(TAG, "Bottom config parse begin.")

        val assetManager = context.applicationContext.assets

        var inputStream: InputStream? = null
        var inputStreamReader: InputStreamReader? = null
        try {
            inputStream = assetManager.open(BOTTOM_CONFIG_FILE_NAME)
            inputStreamReader = InputStreamReader(inputStream)

            val type = object : TypeToken<BottomBar>() {}.type
            return Gson().fromJson(inputStreamReader, type)
        } catch (e: Exception) {
            e.printStackTrace()
        } finally {
            inputStream?.close()
            inputStreamReader?.close()

            Log.d(TAG, "Bottom config parse end.")
        }
        return null
    }

    /**
     * 动态构建NavGraph
     * 替代XML中设置app:navGraph属性的方式
     */
    fun buildNavGraph(
        activity: FragmentActivity,
        containerId: Int
    ): NavController {
        val iterator = destMap.values.iterator()
        val controller = findNavController(activity, containerId)
        val provider = controller.navigatorProvider

        val navGraph = NavGraph(provider.getNavigator(NavGraphNavigator::class.java))
        while (iterator.hasNext()) {
            val node = iterator.next()
            when (node.type) {
                "Activity" -> {
                    val navigator = provider.getNavigator(ActivityNavigator::class.java)
                    val destination = navigator.createDestination()
                    destination.id = node.id
                    val componentName = ComponentName(activity.packageName, node.clazzName)
                    destination.setComponentName(componentName)
                    navGraph.addDestination(destination)
                }
                "Fragment" -> {
                    val navigator = provider.getNavigator(FragmentNavigator::class.java)
                    val destination = navigator.createDestination()
                    destination.id = node.id
                    destination.className = node.clazzName
                    navGraph.addDestination(destination)
                }
                else -> {
                    val navigator = provider.getNavigator(DialogFragmentNavigator::class.java)
                    val destination = navigator.createDestination()
                    destination.id = node.id
                    destination.className = node.clazzName
                    navGraph.addDestination(destination)
                }
            }
            if (node.asStart) {
                navGraph.startDestination = node.id
            }
        }
        controller.graph = navGraph
        return controller
    }

    fun buildBottomNavView(bottomNavigationView: BottomNavigationView) {
        val bottomBar = parseBottomNavViewConfigFile(bottomNavigationView.context) ?: return
        val menu = bottomNavigationView.menu
        bottomBar.tabs.forEach { tab ->
            if (!tab.enable) return@forEach
            if (!destMap.containsKey(tab.pageUrl)) return@forEach
            val menuItem = menu.add(0, destMap[tab.pageUrl]!!.id, tab.index, tab.title)
            menuItem.setIcon(R.drawable.ic_home_black_24dp)
        }
    }

    operator fun get(key: String) = destMap[key]
}