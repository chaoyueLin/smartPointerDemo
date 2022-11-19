#include <jni.h>
#include <string>
#include "Test.h"
#include "utils/RefBase.h"
#include "utils/StrongPointer.h"
using namespace chaoyue;

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_smartpointerdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    Test *pa = new Test;
    sp<Test> spa(pa);
    wp<Test> wpa(pa);
    return env->NewStringUTF(hello.c_str());
}