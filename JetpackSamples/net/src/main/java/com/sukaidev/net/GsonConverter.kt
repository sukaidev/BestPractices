package com.sukaidev.net

import com.google.gson.Gson
import com.google.gson.reflect.TypeToken
import com.sukaidev.restful.RestResponse
import org.json.JSONException
import org.json.JSONObject
import java.lang.reflect.Type

/**
 *
 * @author sukaidev
 * @since 2021/09/20
 */
class GsonConverter {

    private var gson: Gson = Gson()

    fun <T> converter(rawData: String, dataType: Type): RestResponse<T> {
        val response: RestResponse<T> = RestResponse()
        try {
            val jsonObject = JSONObject(rawData)
            response.code = jsonObject.optInt("code")
            response.msg = jsonObject.optString("msg")
            val data = jsonObject.optString("data")

            if (response.code == RestResponse.SUCCESS) {
                response.data = gson.fromJson(data, dataType)
            } else {
                response.errorData = gson.fromJson<MutableMap<String, String>>(
                    data, object : TypeToken<MutableMap<String, String>>() {}.type
                )
            }
        } catch (e: JSONException) {
            e.printStackTrace()
            response.code = -1
            response.msg = e.message
        }
        response.origin = rawData
        return response
    }
}