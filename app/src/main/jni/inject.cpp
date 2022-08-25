//
// Created by liuqi on 2022/8/25.
//

#include <jni.h>
#include <android/log.h>
#include "log.h"

jint JNI_OnLoad(JavaVM* vm, void* reserved){
    LOGI("hello, poison");
    JNIEnv* env = NULL;
    if (vm->GetEnv((void**) &env, JNI_VERSION_1_6) != JNI_OK) {
        return -1;
    }
    return JNI_VERSION_1_6;
}

#ifdef __cplusplus
extern "C" {


}
#endif