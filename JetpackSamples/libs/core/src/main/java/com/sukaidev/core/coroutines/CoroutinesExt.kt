package com.sukaidev.core.coroutines

import com.sukaidev.core.executor.AppExecutor
import kotlinx.coroutines.*
import kotlin.coroutines.CoroutineContext

/**
 * 协程相关
 * @author sukaidev
 * @since 2021/09/21
 */

/**
 * 处理协程异常
 * 调用catch时协程才真正启动
 */
fun CoroutineScope.launchWithCatch(
    context: CoroutineContext = coroutineContext + AppExecutor.coroutineDispatcher,
    start: CoroutineStart = CoroutineStart.DEFAULT,
    block: suspend CoroutineScope.() -> Unit
) = CoroutineCatcher(this, context, start, block)

class CoroutineCatcher(
    private val coroutineScope: CoroutineScope,
    private val context: CoroutineContext,
    private val start: CoroutineStart,
    private val block: suspend CoroutineScope.() -> Unit
) {
    fun catch(catcher: (throwable: Throwable) -> Unit): Job {
        return coroutineScope.launch(context + CoroutineExceptionHandler { _, throwable ->
            catcher.invoke(throwable)
        }, start, block)
    }
}
