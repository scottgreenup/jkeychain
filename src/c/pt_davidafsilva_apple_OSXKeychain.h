/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class pt_davidafsilva_apple_OSXKeychain */

#ifndef _Included_pt_davidafsilva_apple_OSXKeychain
#define _Included_pt_davidafsilva_apple_OSXKeychain
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     pt_davidafsilva_apple_OSXKeychain
 * Method:    _addGenericPassword
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pt_davidafsilva_apple_OSXKeychain__1addGenericPassword
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     pt_davidafsilva_apple_OSXKeychain
 * Method:    _modifyGenericPassword
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pt_davidafsilva_apple_OSXKeychain__1modifyGenericPassword
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     pt_davidafsilva_apple_OSXKeychain
 * Method:    _findGenericPassword
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_pt_davidafsilva_apple_OSXKeychain__1findGenericPassword
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     pt_davidafsilva_apple_OSXKeychain
 * Method:    _deleteGenericPassword
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_pt_davidafsilva_apple_OSXKeychain__1deleteGenericPassword
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif