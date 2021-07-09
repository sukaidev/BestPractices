package com.sukaidev.viewbindingaptdemo

import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.AppCompatTextView
import com.sukaidev.annotations.BindClass
import com.sukaidev.annotations.BindView
import com.sukaidev.runtime.ViewBinding

//import butterknife.BindView
//import butterknife.ButterKnife

//import com.sukaidev.annotations.BindClass
//import com.sukaidev.annotations.BindView

/**
 * Created by sukaidev on 2021/07/06.
 * @author sukaidev
 */
@BindClass
class MainActivity : AppCompatActivity() {

    @BindView(R.id.button_action)
    lateinit var button: AppCompatButton

    @BindView(R.id.tv_hello)
    lateinit var tvHello: AppCompatTextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

//        ButterKnife.bind(this)
        ViewBinding.INSTANCE.bind(this)


        button.setOnClickListener {
            Toast.makeText(this, "绑定成功！", Toast.LENGTH_SHORT).show()
        }

        tvHello.text = "Hello KAPT"
    }
}