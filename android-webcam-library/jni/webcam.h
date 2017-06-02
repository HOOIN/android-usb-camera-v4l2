#ifndef __WEBCAM_H__
#define __WEBCAM_H__

#include <jni.h>

#include "util.h"

static int DEVICE_DESCRIPTOR = -1;
int* RGB_BUFFER = NULL;
int* Y_BUFFER = NULL;

#ifdef __cplusplus
extern "C" {
#endif

// These are documented on the Java side, in NativeWebcam
jint Java_com_nopluz_trafficeyes_common_NativeWebcam_startCamera(JNIEnv* env,
        jobject thiz, jstring deviceName, jint width, jint height);
void Java_com_nopluz_trafficeyes_common_NativeWebcam_loadNextFrame(JNIEnv* env,
        jobject thiz, jobject bitmap);
jboolean Java_com_nopluz_trafficeyes_common_NativeWebcam_cameraAttached(JNIEnv* env,
        jobject thiz);
void Java_com_nopluz_trafficeyes_common_NativeWebcam_stopCamera(JNIEnv* env,
        jobject thiz);
		
#ifdef __cplusplus
}
#endif

#endif // __WEBCAM_H__
