package com.sukaidev.runtime

import com.google.gson.annotations.SerializedName

/**
 * Created by sukaidev on 2021/08/24.
 * @author sukaidev
 */
data class DestinationNode(
    @SerializedName("id") val id: Int,
    @SerializedName("path") val path: String,
    @SerializedName("type") val type: String,
    @SerializedName("asStart") val asStart: Boolean,
    @SerializedName("clazzName") val clazzName: String,
)