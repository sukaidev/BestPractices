package com.sukaidev.net

import com.sukaidev.restful.RestCall
import com.sukaidev.restful.RestCallback
import com.sukaidev.restful.RestRequest
import com.sukaidev.restful.RestResponse
import okhttp3.FormBody
import okhttp3.MediaType
import okhttp3.RequestBody
import okhttp3.ResponseBody
import org.json.JSONObject
import retrofit2.Call
import retrofit2.Callback
import retrofit2.Response
import retrofit2.Retrofit
import retrofit2.http.*

/**
 * 为RestCall适配Retrofit
 * @author sukaidev
 * @since 2021/09/19
 */
class RetrofitCallFactory(baseUrl: String) : RestCall.Factory {

    private var converter: GsonConverter
    private var apiService: ApiService

    init {
        val retrofit = Retrofit.Builder()
            .baseUrl(baseUrl)
            .build()
        apiService = retrofit.create(ApiService::class.java)

        converter = GsonConverter()
    }

    override fun newCall(request: RestRequest): RestCall<Any> {
        return RetrofitCall(request)
    }

    internal inner class RetrofitCall<T>(private val request: RestRequest) : RestCall<T> {

        override fun enqueue(callback: RestCallback<T>) {
            val realCall = createRealCall(request)
            realCall.enqueue(object : Callback<ResponseBody> {
                override fun onResponse(
                    call: Call<ResponseBody>,
                    response: Response<ResponseBody>
                ) {
                    callback.onSuccess(parseResponse(response))
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
                        MediaType.parse("application/json;utf-8"),
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