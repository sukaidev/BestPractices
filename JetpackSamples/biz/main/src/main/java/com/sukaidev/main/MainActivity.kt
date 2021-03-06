package com.sukaidev.main

import android.os.Bundle
import android.util.Log
import androidx.navigation.ui.AppBarConfiguration
import androidx.navigation.ui.setupActionBarWithNavController
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.sukaidev.annotation.Destination
import com.sukaidev.core.base.BaseActivity
import com.sukaidev.main.databinding.ActivityMainBinding
import com.sukaidev.runtime.Router
import dagger.hilt.android.AndroidEntryPoint
import javax.inject.Inject
@AndroidEntryPoint
@Destination(Router.HOME_MAIN_PAGE)
class MainActivity : BaseActivity<ActivityMainBinding>() {

    @Inject
    lateinit var viewModel: MainViewModel

    override fun onBindView(savedInstanceState: Bundle?) {
        val navView: BottomNavigationView = binding.navView

        val navController = Router.buildNavGraph(this, R.id.nav_host_fragment_activity_main)
        val appBarConfiguration = AppBarConfiguration(
            setOf(
                R.id.navigation_home, R.id.navigation_dashboard, R.id.navigation_notifications
            )
        )
        setupActionBarWithNavController(navController, appBarConfiguration)

        Router.buildBottomNavView(navView)

        navView.setOnNavigationItemSelectedListener { item ->
            navController.navigate(item.itemId)
            true
        }

        viewModel.getWanAndroidHomePage(0).observe(this) {
            Log.d("MainActivity", it)
        }
    }
}