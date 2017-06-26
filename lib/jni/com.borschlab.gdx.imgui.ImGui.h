/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_borschlab_gdx_imgui_ImGui */

#ifndef _Included_com_borschlab_gdx_imgui_ImGui
#define _Included_com_borschlab_gdx_imgui_ImGui
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getTexDataAsRGBA32
 * Signature: ()Lcom/borschlab/gdx/imgui/ImGuiTexData;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTexDataAsRGBA32
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyMap
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyMap
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getDeltaTime
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDeltaTime
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setDisplaySize
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDisplaySize
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setDeltaTime
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDeltaTime
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setMousePos
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMousePos
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setMouseDown
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseDown
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyDown
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyDown
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyCtrl
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyCtrl
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyShift
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyShift
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyAlt
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyAlt
  (JNIEnv *, jclass, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    isKeysDown
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isKeysDown
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    addInputCharacter
 * Signature: (C)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_addInputCharacter
  (JNIEnv *, jclass, jchar);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    isMouseHoveringAnyWindow
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isMouseHoveringAnyWindow
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    wantCaptureMouse
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureMouse
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    wantCaptureKeyboard
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureKeyboard
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    wantTextInput
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantTextInput
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setMouseWheel
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseWheel
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    newFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_newFrame
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    render
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_render
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_shutdown
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getDrawListCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawListCount
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getDrawList
 * Signature: (I)Lcom/borschlab/gdx/imgui/ImGuiDrawList;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawList
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getVertBuffer
 * Signature: ([FI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_getVertBuffer
  (JNIEnv *, jclass, jfloatArray, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getIdxBuffer
 * Signature: ([SI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_getIdxBuffer
  (JNIEnv *, jclass, jshortArray, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getTotalVtxCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTotalVtxCount
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    showNativeUserGuide
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeUserGuide
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    showNativeTestWindow
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeTestWindow
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    showMetricsWindow
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showMetricsWindow
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    begin
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2I
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    begin
 * Signature: (Ljava/lang/String;Lcom/borschlab/gdx/imgui/ImBool;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2I
  (JNIEnv *, jclass, jstring, jobject, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    end
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_end
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    beginChild
 * Signature: (Ljava/lang/String;FFZI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI
  (JNIEnv *, jclass, jstring, jfloat, jfloat, jboolean, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    beginChild
 * Signature: (IFFI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__IFFI
  (JNIEnv *, jclass, jint, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    endChild
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_endChild
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getContentRegionMax
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionMax
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getContentRegionAvail
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvail
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getContentRegionAvailWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvailWidth
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowContentRegionMin
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMin
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowContentRegionMax
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMax
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowContentRegionWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionWidth
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowPos
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowPos
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowSize
 * Signature: ()Lcom/badlogic/gdx/math/Vector2;
 */
JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowSize
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowWidth
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getWindowHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowHeight
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    isWindowCollapsed
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_isWindowCollapsed
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowFontScale
 * Signature: (F)F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFontScale
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowPos
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPos
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowPosCenter
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPosCenter
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowSize
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSize
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowSizeConstraints
 * Signature: (FFFF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSizeConstraints
  (JNIEnv *, jclass, jfloat, jfloat, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowContentSize
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentSize
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowContentWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentWidth
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowCollapsed
 * Signature: (ZI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowCollapsed
  (JNIEnv *, jclass, jboolean, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setNextWindowFocus
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowFocus
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowPos
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__FFI
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowSize
 * Signature: (FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__FFI
  (JNIEnv *, jclass, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowCollapsed
 * Signature: (ZI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__ZI
  (JNIEnv *, jclass, jboolean, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowFocus
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowPos
 * Signature: (Ljava/lang/String;FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__Ljava_lang_String_2FFI
  (JNIEnv *, jclass, jstring, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowSize
 * Signature: (Ljava/lang/String;FFI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__Ljava_lang_String_2FFI
  (JNIEnv *, jclass, jstring, jfloat, jfloat, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowCollapsed
 * Signature: (Ljava/lang/String;ZI)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__Ljava_lang_String_2ZI
  (JNIEnv *, jclass, jstring, jboolean, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setWindowFocus
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getScrollX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollX
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getScrollY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollY
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getScrollMaxX
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxX
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getScrollMaxY
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxY
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setScrollX
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollX
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setScrollY
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollY
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setScrollHere
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollHere
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setScrollFromPosY
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollFromPosY
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    setKeyboardFocusHere
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyboardFocusHere
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    pushStyleVar
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushStyleVar
  (JNIEnv *, jclass, jint, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getFontSize
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getFontSize
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    pushItemWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushItemWidth
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    separator
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_separator
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    sameLine
 * Signature: (FF)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_sameLine
  (JNIEnv *, jclass, jfloat, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    spacing
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_spacing
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    indent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_indent
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    unindent
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_unindent
  (JNIEnv *, jclass, jfloat);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    text
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_text
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    textWrapped
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_textWrapped
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    smallButton
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_smallButton
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    checkbox
 * Signature: (Ljava/lang/String;Lcom/borschlab/gdx/imgui/ImBool;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_checkbox
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    treeNode
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_treeNode
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    treePop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_treePop
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getTreeNodeToLabelSpacing
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTreeNodeToLabelSpacing
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    collapsingHeader
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader
  (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    beginMenuBar
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenuBar
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    endMenuBar
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenuBar
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    beginMenu
 * Signature: (Ljava/lang/String;Z)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenu
  (JNIEnv *, jclass, jstring, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    endMenu
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenu
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    menuItem
 * Signature: (Ljava/lang/String;Ljava/lang/String;ZZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ
  (JNIEnv *, jclass, jstring, jstring, jboolean, jboolean);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    menuItem
 * Signature: (Ljava/lang/String;Lcom/borschlab/gdx/imgui/ImBool;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2
  (JNIEnv *, jclass, jstring, jobject);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    menuItem
 * Signature: (Ljava/lang/String;Ljava/lang/String;Lcom/borschlab/gdx/imgui/ImBool;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2
  (JNIEnv *, jclass, jstring, jstring, jobject);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    logButtons
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_logButtons
  (JNIEnv *, jclass);

/*
 * Class:     com_borschlab_gdx_imgui_ImGui
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_borschlab_gdx_imgui_ImGui_getVersion
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
