//
// Created by Jonn Alves on 21/11/21.
//

#include <jni.h>
#include <string>

#define xstr(s) str(s) //important header
#define str(s) #s //important header
extern "C" JNIEXPORT jstring

JNICALL
Java_com_quanticheart_secrets_Keys_apiKey(JNIEnv *env, jobject object) {
    std::string stringToBeReturned;
    std::string build_type = xstr(BUILD_TYPE); //get the value of the variable from grade.build
    if (build_type == "debug") {
        stringToBeReturned = "your_api_key_goes_here_DEBUG";
    } else {
        stringToBeReturned = "your_api_key_goes_here_RELEASE";
    }
    return env->NewStringUTF(stringToBeReturned.c_str());
}