/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_rockcarry_ffplayer_player */

#ifndef _Included_com_rockcarry_ffplayer_player
#define _Included_com_rockcarry_ffplayer_player
#ifdef __cplusplus
extern "C" {
#endif
#undef com_rockcarry_ffplayer_player_RENDER_LETTERBOX
#define com_rockcarry_ffplayer_player_RENDER_LETTERBOX 0L
#undef com_rockcarry_ffplayer_player_RENDER_STRETCHED
#define com_rockcarry_ffplayer_player_RENDER_STRETCHED 1L
#undef com_rockcarry_ffplayer_player_PARAM_VIDEO_WIDTH
#define com_rockcarry_ffplayer_player_PARAM_VIDEO_WIDTH 0L
#undef com_rockcarry_ffplayer_player_PARAM_VIDEO_HEIGHT
#define com_rockcarry_ffplayer_player_PARAM_VIDEO_HEIGHT 1L
#undef com_rockcarry_ffplayer_player_PARAM_VIDEO_DURATION
#define com_rockcarry_ffplayer_player_PARAM_VIDEO_DURATION 2L
#undef com_rockcarry_ffplayer_player_PARAM_VIDEO_POSITION
#define com_rockcarry_ffplayer_player_PARAM_VIDEO_POSITION 3L
#undef com_rockcarry_ffplayer_player_PARAM_RENDER_MODE
#define com_rockcarry_ffplayer_player_PARAM_RENDER_MODE 4L
/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativeOpen
 * Signature: (Ljava/lang/String;Ljava/lang/Object;II)I
 */
JNIEXPORT jint JNICALL Java_com_rockcarry_ffplayer_player_nativeOpen
  (JNIEnv *, jclass, jstring, jobject, jint, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativeClose
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rockcarry_ffplayer_player_nativeClose
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativePlay
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rockcarry_ffplayer_player_nativePlay
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativePause
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_rockcarry_ffplayer_player_nativePause
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativeSeek
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_rockcarry_ffplayer_player_nativeSeek
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativeSetParam
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_rockcarry_ffplayer_player_nativeSetParam
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_rockcarry_ffplayer_player
 * Method:    nativeGetParam
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_com_rockcarry_ffplayer_player_nativeGetParam
  (JNIEnv *, jclass, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
