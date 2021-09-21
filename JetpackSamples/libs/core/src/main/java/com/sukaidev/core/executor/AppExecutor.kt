package com.sukaidev.core.executor

import android.os.Handler
import android.os.Looper
import android.util.Log
import kotlinx.coroutines.asCoroutineDispatcher
import java.util.concurrent.ArrayBlockingQueue
import java.util.concurrent.ThreadPoolExecutor
import java.util.concurrent.TimeUnit
import java.util.concurrent.atomic.AtomicInteger

/**
 * 全局线程池
 * 统一App中Okhttp、协程以及其他异步任务都应该使用此线程池
 * @author sukaidev
 * @since 2021/09/20
 */
object AppExecutor {

    private const val TAG = "AppExecutor"

    private val mainHandler = Handler(Looper.getMainLooper())

    private val cores = 5.coerceAtMost(Runtime.getRuntime().availableProcessors())
    private val maxPoolSize = cores * 3
    private const val maxQueuedWorkSize = 2000
    private const val maxKeepAliveTime = 10L

    private val threadIndex = AtomicInteger(0)

    private val executor =
        ThreadPoolExecutor(
            cores,
            maxPoolSize,
            maxKeepAliveTime,
            TimeUnit.SECONDS,
            ArrayBlockingQueue(maxQueuedWorkSize), { runnable ->
                Thread(
                    ThreadGroup("Default-Group"),
                    runnable,
                    "Thread-${threadIndex.incrementAndGet()}"
                )
            }, { r, executor ->
                Log.e(TAG, "$TAG RejectedExecution, $r, ${executor.taskCount}")
            })

    val coroutineDispatcher = executor.asCoroutineDispatcher()

    fun execute(runnable: Runnable) {
        executor.execute(runnable)
    }

    fun postToMainThread(runnable: Runnable) = mainHandler.post(runnable)

    fun postAtFrontOfMainThread(runnable: Runnable) = mainHandler.postAtFrontOfQueue(runnable)

    fun getGlobalExecutor() = executor
}