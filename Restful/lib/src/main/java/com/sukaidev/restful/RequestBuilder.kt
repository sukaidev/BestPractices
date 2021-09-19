package com.sukaidev.restful

import com.sukaidev.restful.annotation.*
import java.lang.reflect.Method
import java.lang.reflect.ParameterizedType
import java.lang.reflect.Type

/**
 * Created by sukaidev on 2021/09/05.
 *
 * 请求构建器
 *
 * 负责解析所有注解并创建RestRequest
 *
 * @author sukaidev
 */
class RequestBuilder(private val baseUrl: String, method: Method, args: Array<Any>) {

    private var host: String? = null
    private var httpMethod: Int = 0
    private var returnType: Type? = null
    private var formPost: Boolean = true
    private var relativeUrl: String? = null
    private var headers = HashMap<String, String>()
    private var parameters = HashMap<String, String>()

    init {
        parseMethodAnnotations(method)
        parseMethodParameter(method, args)
        parseMethodReturnType(method)
    }

    /**
     * 解析方法注解
     */
    private fun parseMethodAnnotations(method: Method) {
        val annotations = method.annotations
        for (annotation in annotations) {
            when (annotation) {
                is GET -> {
                    relativeUrl = annotation.value
                    httpMethod = RestRequest.METHOD.GET
                }
                is POST -> {
                    relativeUrl = annotation.value
                    httpMethod = RestRequest.METHOD.GET
                }
                is Headers -> {
                    val headersArray = annotation.value
                    for (header in headersArray) {
                        val colon = header.indexOf(":")
                        check(!(colon == 0 || colon == -1)) {
                            "@headers value must be in the form [name:value],but found [${header}]"
                        }
                        val name = header.substring(0, colon)
                        val value = header.substring(colon + 1).trim()
                        headers[name] = value
                    }
                }
                is BaseUrl -> {
                    host = annotation.value
                }
                else ->
                    throw IllegalStateException("cannot handle method annotation : ${annotation.javaClass.name}")
            }
        }
        require(httpMethod == RestRequest.METHOD.GET || httpMethod == RestRequest.METHOD.POST) {
            "method ${method.name} should annotated with GET or POST."
        }
        if (host == null) host = baseUrl
    }

    /**
     * 解析参数注解
     */
    private fun parseMethodParameter(method: Method, args: Array<Any>) {
        val parameterAnnotations = method.parameterAnnotations
        val equals = parameterAnnotations.size == args.size
        require(equals) {
            "method ${method.name}'s arguments annotation count dose not match expect."
        }


        for (index in args.indices) {
            val annotations = parameterAnnotations[index]
            require(annotations.size <= 1) {
                "method ${method.name}'s field can only has one annotation."
            }
            val value = args[index]
            require(isPrimitive(value)) { "Argument $${value::javaClass.name} is not supported." }

            when (val annotation = annotations[0]) {
                is Field -> {
                    val k = annotation.value
                    val v = args[index]
                    parameters[k] = value.toString()
                }
                is Path -> {
                    val replaceName = annotation.value
                    val replaceValue = value.toString()
                    val newRelativeUrl = relativeUrl?.replace("{$replaceName}", replaceValue)
                    relativeUrl = newRelativeUrl
                }
                else -> {
                    throw IllegalStateException("cannot handle method parameter annotation : ${annotation.javaClass.name}")
                }
            }
        }
    }

    private fun isPrimitive(value: Any): Boolean {
        if (value is String) return true
        try {
            val field = value.javaClass.getField("TYPE")
            val clazz = field[null] as Class<*>
            if (clazz.isPrimitive) return true
        } catch (e: IllegalAccessException) {
            e.printStackTrace()
        } catch (e: NoSuchFieldError) {
            e.printStackTrace()
        }
        return false
    }

    /**
     * 解析返回值类型
     */
    private fun parseMethodReturnType(method: Method) {
        if (method.returnType != RestCall::class.java)
            throw IllegalStateException("method ${method.name} must be type of ${RestCall::class.qualifiedName}")
        val genericReturnType = method.genericReturnType
        if (genericReturnType is ParameterizedType) {
            val actualTypeArguments = genericReturnType.actualTypeArguments
            require(actualTypeArguments.size == 1) { "method ${method.name} can only has contains one generic return type" }
            returnType = actualTypeArguments[0]
        } else {
            throw IllegalStateException("method ${method.name} must has one generic parameter.")
        }
    }

    /**
     * 构建Request
     */
    fun build(): RestRequest {
        val request = RestRequest()
        request.host = host
        request.headers = headers
        request.parameters = parameters
        request.httpMethod = httpMethod
        request.returnType = returnType
        request.relativeUrl = relativeUrl
        request.formPost = formPost
        return request
    }

    companion object {
        fun parse(baseUrl: String, method: Method, args: Array<Any>): RequestBuilder {
            return RequestBuilder(baseUrl, method, args)
        }
    }
}