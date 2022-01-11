package com.sukaidev.main.di

import androidx.lifecycle.ViewModel
import com.sukaidev.main.MainViewModel
import com.sukaidev.main.dashboard.DashboardViewModel
import com.sukaidev.main.home.HomeViewModel
import com.sukaidev.main.notifications.NotificationsViewModel
import dagger.Binds
import dagger.Module
import dagger.hilt.InstallIn
import dagger.hilt.android.components.ViewModelComponent
import dagger.hilt.android.scopes.ViewModelScoped

/**
 * Created by sukaidev on 2022/01/07.
 * @author sukaidev
 */
@Module
@InstallIn(ViewModelComponent::class)
abstract class MainViewModelModule {

    @Binds
    @ViewModelScoped
    abstract fun provideMainViewModel(viewModel: MainViewModel): ViewModel

    @Binds
    @ViewModelScoped
    abstract fun provideHomeViewModel(viewModel: HomeViewModel): ViewModel

    @Binds
    @ViewModelScoped
    abstract fun provideDashboardViewModel(viewModel: DashboardViewModel): ViewModel

    @Binds
    @ViewModelScoped
    abstract fun provideNotificationViewModel(viewModel: NotificationsViewModel): ViewModel
}