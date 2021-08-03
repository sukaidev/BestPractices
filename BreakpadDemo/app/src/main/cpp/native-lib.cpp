#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_sukaidev_breakpaddemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from Native";
    return env->NewStringUTF(hello.c_str());
}