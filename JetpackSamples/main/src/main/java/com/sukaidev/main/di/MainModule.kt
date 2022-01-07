package com.sukaidev.main.di

import com.sukaidev.main.net.WanAndroidApi
import com.sukaidev.net.RestClient
import dagger.Module
import dagger.Provides
import dagger.hilt.InstallIn
import dagger.hilt.android.components.ActivityRetainedComponent
import dagger.hilt.android.scopes.ActivityRetainedScoped

/**
 * 首页需注入依赖模块.
 * @author sukaidev
 * @since 2021/10/27
 */
@Module
@InstallIn(ActivityRetainedComponent::class)
class MainModule {

    @Provides
    @ActivityRetainedScoped
    fun provideTestApi(): WanAndroidApi = RestClient.create(WanAndroidApi::class.java)
}