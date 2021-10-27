package com.sukaidev.core.ext

import androidx.lifecycle.ViewModel
import androidx.lifecycle.viewModelScope
import com.sukaidev.core.executor.AppExecutor
import kotlinx.coroutines.CoroutineScope
import kotlinx.coroutines.CoroutineStart
import kotlin.coroutines.CoroutineContext

/**
 * @author sukaidev
 * @since 2021/10/27
 */
fun ViewModel.launch(
    context: CoroutineContext = AppExecutor.coroutineDispatcher,
    start: CoroutineStart = CoroutineStart.DEFAULT,
    block: suspend CoroutineScope.() -> Unit
) = viewModelScope.launchWithCatch(context, start, block)
