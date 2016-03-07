#include <jni.h>
#include <iostream>

extern "C" {

JNIEXPORT jstring JNICALL
Java_com_avenza_helloandroidjni_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {

    // TODO
    const char* message = "Hello World From Jni";

    return env->NewStringUTF(message);
}
}