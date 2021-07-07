package com.sukaidev.viewbindingaptdemo

import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import butterknife.BindView
import butterknife.ButterKnife

//import com.sukaidev.annotations.BindClass
//import com.sukaidev.annotations.BindView

/**
 * Created by sukaidev on 2021/07/06.
 * @author sukaidev
 */
//@BindClass(R.layout.activity_main)
class MainActivity : AppCompatActivity() {

    //    @BindView(R.id.button_action)
    @BindView(R.id.button_action)
    lateinit var button: AppCompatButton

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        ButterKnife.bind(this)

        button.setOnClickListener {
            Toast.makeText(this, "绑定成功！", Toast.LENGTH_SHORT).show()
        }
    }

    override fun onDestroy() {
        super.onDestroy()

    }
}