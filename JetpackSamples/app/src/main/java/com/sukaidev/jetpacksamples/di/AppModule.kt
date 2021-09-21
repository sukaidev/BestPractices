package com.sukaidev.jetpacksamples.di

import com.sukaidev.jetpacksamples.TestApi
import com.sukaidev.net.RestClient
import dagger.Module
import dagger.Provides
import dagger.hilt.InstallIn
import dagger.hilt.android.components.ActivityRetainedComponent
import dagger.hilt.android.scopes.ActivityRetainedScoped

/**
 *
 * @author sukaidev
 * @since 2021/09/21
 */
@Module
@InstallIn(ActivityRetainedComponent::class)
class AppModule {

    @Provides
    @ActivityRetainedScoped
    fun provideTestApi(): TestApi = RestClient.create(TestApi::class.java)
}