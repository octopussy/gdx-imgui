#ifndef _Included_Utils_h
#define _Included_Utils_h

/*#ifdef __cplusplus
extern "C" {
#endif*/

#include <imgui.h>

jobject toGdxVec2(JNIEnv* env, const ImVec2& v) {
    assert(env != NULL);
    jclass vecCls = env->FindClass("com/badlogic/gdx/math/Vector2");
    assert(vecCls != NULL);
    jmethodID vecCtor = env->GetMethodID(vecCls, "<init>", "(FF)V");
    assert(vecCtor != NULL);
    return env->NewObject(vecCls, vecCtor, v.x, v.y);
}

bool getImBool(JNIEnv* env, jobject imbool) {
    jclass resultCls = env->FindClass("com/borschlab/gdx/imgui/ImBool");
    assert(resultCls != NULL);

    jmethodID getMethod = env->GetMethodID(resultCls, "get", "()Z");
    assert(getMethod != NULL);

    return env->CallBooleanMethod(imbool, getMethod);
}

void setImBool(JNIEnv* env, jobject imbool, bool value) {
    jclass resultCls = env->FindClass("com/borschlab/gdx/imgui/ImBool");
    assert(resultCls != NULL);

    jmethodID setMethod = env->GetMethodID(resultCls, "set", "(Z)V");
    assert(setMethod != NULL);

    env->CallVoidMethod(imbool, setMethod, value);
}

float getImFloat(JNIEnv* env, jobject imfloat) {
    jclass resultCls = env->FindClass("com/borschlab/gdx/imgui/ImFloat");
    assert(resultCls != NULL);

    jmethodID getMethod = env->GetMethodID(resultCls, "get", "()F");
    assert(getMethod != NULL);

    return env->CallFloatMethod(imfloat, getMethod);
}

void setImFloat(JNIEnv* env, jobject imfloat, float value) {
    jclass resultCls = env->FindClass("com/borschlab/gdx/imgui/ImFloat");
    assert(resultCls != NULL);

    jmethodID setMethod = env->GetMethodID(resultCls, "set", "(F)V");
    assert(setMethod != NULL);

    env->CallVoidMethod(imfloat, setMethod, value);
}

#endif