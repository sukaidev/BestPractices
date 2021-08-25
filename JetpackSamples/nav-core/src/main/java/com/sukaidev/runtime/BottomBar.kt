package com.sukaidev.runtime

import com.google.gson.annotations.SerializedName

/**
 * Created by sukaidev on 2021/08/25.
 * @author sukaidev
 */
data class BottomBar(
    @SerializedName("selectTab") val selectTab: Int,
    @SerializedName("tabs") val tabs: List<Tab>
) {

    data class Tab(
        @SerializedName("size") val size: Int,
        @SerializedName("enable") val enable: Boolean,
        @SerializedName("index") val index: Int,
        @SerializedName("title") val title: String,
        @SerializedName("pageUrl") val pageUrl: String,
    )
}