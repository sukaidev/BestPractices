package com.sukaidev.main

import androidx.lifecycle.LiveData
import androidx.lifecycle.MutableLiveData
import androidx.lifecycle.ViewModel
import com.sukaidev.core.ext.launch
import com.sukaidev.core.ext.launchDefault
import com.sukaidev.main.net.WanAndroidApi
import com.sukaidev.restful.RestCallback
import com.sukaidev.restful.RestResponse
import kotlinx.coroutines.suspendCancellableCoroutine
import javax.inject.Inject

/**
 * Created by sukaidev on 2022/01/07.
 * @author sukaidev
 */
class MainViewModel @Inject constructor(private val api: WanAndroidApi) : ViewModel() {

    fun getWanAndroidHomePage(page: Int): LiveData<String> {
        val liveData = MutableLiveData<String>()
        launchDefault({
            liveData.postValue(getHomePage(page))
        }) {
            liveData.postValue("error")
        }
        return liveData
    }

    private suspend fun getHomePage(page: Int) =
        suspendCancellableCoroutine<String> { continuation ->
            continuation.invokeOnCancellation {
                continuation.cancel(it)
            }
            api.getWanAndroidHomePage(page).enqueue(object : RestCallback<Any> {
                override fun onFailed(throwable: Throwable) {
                    continuation.resumeWith(Result.failure(throwable))
                }

                override fun onSuccess(response: RestResponse<Any>) {
                    continuation.resumeWith(Result.success(response.data.toString()))
                }
            })
        }
}