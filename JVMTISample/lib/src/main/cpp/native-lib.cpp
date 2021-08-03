#include <jni.h>
#include <string>
#include "jvmti.h"

extern "C" JNIEXPORT jint JNICALL Agent_OnAttach(JavaVM *vm, char *options, void *reserved) {

    jvmtiEnv *jvmti_env = CreateJvmtiEnv(vm);
}

jvmtiEnv *CreateJvmtiEnv(JavaVM *vm) {
    jvmtiEnv *jvmti_env;
    jint result = vm->GetEnv((void **) &jvmti_env, JVMTI_VERSION_1_2);
    if (result != JNI_OK) {
        return nullptr;
    }

    return jvmti_env;

}
