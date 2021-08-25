package com.sukaidev.jetpacksamples

import android.os.Bundle
import androidx.navigation.findNavController
import androidx.navigation.ui.AppBarConfiguration
import androidx.navigation.ui.setupActionBarWithNavController
import androidx.navigation.ui.setupWithNavController
import com.google.android.material.bottomnavigation.BottomNavigationView
import com.sukaidev.annotation.Destination
import com.sukaidev.jetpacksamples.base.BaseActivity
import com.sukaidev.jetpacksamples.databinding.ActivityMainBinding
import com.sukaidev.runtime.Router

@Destination(Router.HOME_MAIN_PAGE)
class MainActivity : BaseActivity<ActivityMainBinding>() {

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
    }

}