package com.sukaidev.jetpacksamples

import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.google.android.material.button.MaterialButton
import com.sukaidev.main.MainActivity

/**
 *
 * @author sukaidev
 * @since 2021/10/27
 */
class SplashActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_splash)

        findViewById<MaterialButton>(R.id.btn_enter).setOnClickListener {
            startActivity(Intent(this, MainActivity::class.java))
        }
    }

}