package com.sukaidev.viewbindingaptdemo

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.appcompat.widget.AppCompatButton
import androidx.appcompat.widget.AppCompatTextView
import androidx.fragment.app.Fragment
import com.sukaidev.annotations.BindClass
import com.sukaidev.annotations.BindView
import com.sukaidev.runtime.ViewBinding

/**
 * Created by sukaidev on 2021/07/09.
 * @author sukaidev
 */
@BindClass
class MainFragment : Fragment() {

    @BindView(R.id.tv_hello)
    lateinit var tvHello: AppCompatTextView

    @BindView(R.id.tv_change_text)
    lateinit var button: AppCompatButton


    override fun onCreateView(inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?): View? {
        return inflater.inflate(R.layout.fragment_main, container, false)
    }

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)
        ViewBinding.INSTANCE.bind(this)

        button.setOnClickListener {
            tvHello.text = "Hello KAPT"
        }
    }
}