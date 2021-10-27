package com.sukaidev.net

import android.util.Log
import com.sukaidev.core.cache.CacheManager
import com.sukaidev.core.executor.AppExecutor
import com.sukaidev.restful.RestCall
import com.sukaidev.restful.RestCallback
import com.sukaidev.restful.RestRequest
import com.sukaidev.restful.RestResponse
import com.sukaidev.restful.annotation.CacheStrategy
import okhttp3.*
import okhttp3.MediaType.Companion.toMediaTypeOrNull
import okhttp3.logging.HttpLoggingInterceptor
import org.json.JSONObject
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response
import retrofit2.Retrofit
import retrofit2.http.*
import java.util.concurrent.TimeUnit

/**
 * 为RestCall适配Retrofit
 * @author sukaidev
 * @since 2021/09/19
 */
class RetrofitCallFactory(baseUrl: String) : RestCall.Factory {

    private var converter: GsonConverter
    private var apiService: ApiService

    init {
        val client = OkHttpClient.Builder()
            .addInterceptor(HttpLoggingInterceptor())
            .dispatcher(Dispatcher(AppExecutor.getGlobalExecutor()))
            .connectTimeout(10L, TimeUnit.SECONDS)
            .readTimeout(10L, TimeUnit.SECONDS)
            .writeTimeout(10L, TimeUnit.SECONDS)
            .build()

        val retrofit = Retrofit.Builder()
            .baseUrl(baseUrl)
            .client(client)
            .build()
        apiService = retrofit.create(ApiService::class.java)

        converter = GsonConverter()
    }

    override fun newCall(request: RestRequest): RestCall<Any> {
        return RetrofitCall(request)
    }

    internal inner class RetrofitCall<T>(private val request: RestRequest) : RestCall<T> {

        override fun enqueue(callback: RestCallback<T>) {
            if (request.cacheStrategy == CacheStrategy.CACHE_FIRST) {
                AppExecutor.execute {
                    val cacheResponse = readCache()
                    if (cacheResponse.data != null) {
                        AppExecutor.postAtFrontOfMainThread { callback.onSuccess(cacheResponse) }
                        Log.d("RetrofitCall","从缓存中获取数据...")
                    }
                }
            }
            val realCall = createRealCall(request)
            realCall.enqueue(object : Callback<ResponseBody> {
                override fun onResponse(
                    call: Call<ResponseBody>,
                    response: Response<ResponseBody>
                ) {
                    val resp = parseResponse(response)
                    saveCacheIfNeeded(resp)
                    callback.onSuccess(resp)
                }

                override fun onFailure(call: Call<ResponseBody>, t: Throwable) {
                    callback.onFailed(t)
                }
            })
        }


        override fun execute(): RestResponse<T> {
            val realCall = createRealCall(request)
            val response = realCall.execute()
            return parseResponse(response)
        }

        private fun readCache(): RestResponse<T> {
            val cacheKey = request.getCacheKey()
            val cache = CacheManager.getCache<T>(cacheKey)
            val cachedResponse = RestResponse<T>()
            cachedResponse.data = cache
            cachedResponse.code = RestResponse.SUCCESS
            cachedResponse.msg = "缓存获取成功"
            return cachedResponse
        }

        private fun saveCacheIfNeeded(response: RestResponse<T>) {
            if (request.cacheStrategy != CacheStrategy.NET_ONLY) {
                if (response.data != null) {
                    AppExecutor.execute {
                        CacheManager.saveCache(request.getCacheKey(), response.data)
                    }
                }
            }
        }

        private fun parseResponse(response: Response<ResponseBody>): RestResponse<T> {
            var rawData = ""
            if (response.isSuccessful) {
                val body = response.body()
                if (body != null) {
                    rawData = body.string()
                }
            } else {
                val body = response.errorBody()
                if (body != null) {
                    rawData = body.string()
                }
            }
            return converter.converter(rawData, request.returnType!!)
        }

        private fun createRealCall(request: RestRequest): Call<ResponseBody> {
            if (request.httpMethod == RestRequest.METHOD.GET) {
                return apiService.get(
                    request.headers,
                    request.endPointUrl(),
                    request.parameters as MutableMap<String, String>
                )
            } else if (request.httpMethod == RestRequest.METHOD.POST) {
                val builder = FormBody.Builder()
                val jsonObject = JSONObject()

                val parameters = request.parameters
                for ((key, value) in parameters!!) {
                    if (request.formPost) {
                        builder.add(key, value)
                    } else {
                        jsonObject.put(key, value)
                    }
                }
                val requestBody: RequestBody = if (request.formPost) {
                    builder.build()
                } else {
                    RequestBody.create(
                        "application/json;utf-8".toMediaTypeOrNull(),
                        jsonObject.toString()
                    )
                }
                return apiService.post(request.headers, request.endPointUrl(), requestBody)
            }
            throw IllegalStateException(
                "HttpMethod not supported yet. Url =${request.endPointUrl()}"
            )
        }
    }

    interface ApiService {

        @GET
        fun get(
            @HeaderMap headers: MutableMap<String, String>?,
            @Url url: String,
            @QueryMap(encoded = false) params: MutableMap<String, String>?
        ): Call<ResponseBody>

        @POST
        fun post(
            @HeaderMap headers: MutableMap<String, String>?,
            @Url url: String,
            @Body body: RequestBody?
        ): Call<ResponseBody>
    }
}