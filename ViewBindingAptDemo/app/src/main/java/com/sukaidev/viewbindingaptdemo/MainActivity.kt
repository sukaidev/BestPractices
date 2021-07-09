package com.sukaidev.viewbindingaptdemo

import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import com.sukaidev.annotations.BindClass
import com.sukaidev.annotations.BindView
import com.sukaidev.runtime.ViewBinding

/**
 * Created by sukaidev on 2021/07/06.
 * @author sukaidev
 */
@BindClass
class MainActivity : AppCompatActivity() {

    @BindView(R.id.button_action)
    lateinit var button: AppCompatButton

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        ViewBinding.INSTANCE.bind(this)

        button.setOnClickListener {
            Toast.makeText(this, "绑定成功！", Toast.LENGTH_SHORT).show()
        }

        supportFragmentManager
            .beginTransaction()
            .replace(R.id.fragment_container, MainFragment())
            .commit()
    }
}