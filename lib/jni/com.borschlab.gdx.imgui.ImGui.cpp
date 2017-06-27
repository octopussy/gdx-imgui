#include <com.borschlab.gdx.imgui.ImGui.h>

//@line:13

                #include <imgui.h>
		#include <utils.h>
	 JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTexDataAsRGBA32(JNIEnv* env, jclass clazz) {


//@line:24

                ImGuiIO& io = ImGui::GetIO();
		unsigned char* pixels;
		int width, height, bpp;
		io.Fonts->GetTexDataAsRGBA32(&pixels, &width, &height, &bpp);

		int size = width * height * bpp;

		jbyteArray result = env->NewByteArray(size);

		env->SetByteArrayRegion(result, 0, size, (jbyte*)pixels);

		jclass cls = env->FindClass("com/borschlab/gdx/imgui/ImGuiTexData");
		jmethodID constructor = env->GetMethodID(cls, "<init>", "([BIII)V");
		jobject object = env->NewObject(cls, constructor, result, width, height, bpp);
		return object;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyMap(JNIEnv* env, jclass clazz, jint key, jint value) {


//@line:49
 ImGui::GetIO().KeyMap[key] = value; 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDeltaTime(JNIEnv* env, jclass clazz) {


//@line:51
 ImGui::GetIO().DeltaTime; 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDisplaySize(JNIEnv* env, jclass clazz, jfloat width, jfloat height) {


//@line:53

                ImGuiIO& io = ImGui::GetIO();
	 	io.DisplaySize = ImVec2(width, height);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDeltaTime(JNIEnv* env, jclass clazz, jfloat value) {


//@line:58

		ImGuiIO& io = ImGui::GetIO();
	 	io.DeltaTime = value > 0.0 ? value : (float)(1.0f/60.0f);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMousePos(JNIEnv* env, jclass clazz, jfloat x, jfloat y) {


//@line:63

	 	ImGuiIO& io = ImGui::GetIO();
	 	io.MousePos = ImVec2(x, y);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseDown(JNIEnv* env, jclass clazz, jint index, jboolean buttonPressed) {


//@line:68

		ImGuiIO& io = ImGui::GetIO();
		io.MouseDown[index] = buttonPressed;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyDown(JNIEnv* env, jclass clazz, jint keycode, jboolean set) {


//@line:73

		ImGuiIO& io = ImGui::GetIO();
		io.KeysDown[keycode] = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyCtrl(JNIEnv* env, jclass clazz, jboolean set) {


//@line:78

		ImGuiIO& io = ImGui::GetIO();
		io.KeyCtrl = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyShift(JNIEnv* env, jclass clazz, jboolean set) {


//@line:83

		ImGuiIO& io = ImGui::GetIO();
		io.KeyShift = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyAlt(JNIEnv* env, jclass clazz, jboolean set) {


//@line:88

		ImGuiIO& io = ImGui::GetIO();
		io.KeyAlt = set;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isKeysDown(JNIEnv* env, jclass clazz, jint keycode) {


//@line:93

		ImGuiIO& io = ImGui::GetIO();
		return io.KeysDown[keycode];
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_addInputCharacter(JNIEnv* env, jclass clazz, jchar character) {


//@line:98

	 	ImGuiIO& io = ImGui::GetIO();
	 	io.AddInputCharacter(character);
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isMouseHoveringAnyWindow(JNIEnv* env, jclass clazz) {


//@line:103

		return ImGui::IsMouseHoveringAnyWindow();
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureMouse(JNIEnv* env, jclass clazz) {


//@line:107

	 	return ImGui::GetIO().WantCaptureMouse;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureKeyboard(JNIEnv* env, jclass clazz) {


//@line:111

	 	return ImGui::GetIO().WantCaptureKeyboard;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantTextInput(JNIEnv* env, jclass clazz) {


//@line:115

	 	return ImGui::GetIO().WantTextInput;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseWheel(JNIEnv* env, jclass clazz, jfloat value) {


//@line:119

		ImGuiIO& io = ImGui::GetIO();
	 	io.MouseWheel = value;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_newFrame(JNIEnv* env, jclass clazz) {


//@line:124

	 	ImGui::NewFrame();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_render(JNIEnv* env, jclass clazz) {


//@line:128

	 	ImGui::Render();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_shutdown(JNIEnv* env, jclass clazz) {


//@line:132

	 	ImGui::Shutdown();
	

}

JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawListCount(JNIEnv* env, jclass clazz) {


//@line:136

	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->CmdListsCount;
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawList(JNIEnv* env, jclass clazz, jint index) {


//@line:141

	 	ImDrawData* data = ImGui::GetDrawData();
	 	ImDrawList* list = data->CmdLists[index];

		jclass cmdCls = env->FindClass("com/borschlab/gdx/imgui/ImGuiDrawCmd");
	 	jclass listCls = env->FindClass("com/borschlab/gdx/imgui/ImGuiDrawList");

	 	assert(cmdCls != NULL);
		assert(listCls != NULL);

		jmethodID cmdCtor = env->GetMethodID(cmdCls, "<init>", "(IFFFF)V");
		jmethodID listCtor = env->GetMethodID(listCls, "<init>", "([Lcom/borschlab/gdx/imgui/ImGuiDrawCmd;IIII)V");

		assert(cmdCtor != NULL);
		assert(listCtor != NULL);

		jobjectArray array = env->NewObjectArray(list->CmdBuffer.Size, cmdCls, NULL);
		jint vtxCount = list->VtxBuffer.Size;
		jint vtxElementSize = sizeof(ImDrawVert);
		jint idxCount = list->IdxBuffer.Size;
		jint idxElementSize = sizeof(ImDrawIdx);

		for (int i = 0; i < list->CmdBuffer.Size; ++i) {
			const ImDrawCmd* cmd = &list->CmdBuffer[i];
			jobject o = env->NewObject(cmdCls, cmdCtor, cmd->ElemCount, cmd->ClipRect.x,
				cmd->ClipRect.y, cmd->ClipRect.z, cmd->ClipRect.w);

			env->SetObjectArrayElement(array, i, o);
		}

		jobject result = env->NewObject(listCls, listCtor, array, vtxCount, vtxElementSize, idxCount, idxElementSize);
	 	return result;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_getVertBuffer(JNIEnv* env, jclass clazz, jfloatArray obj_out, jint cmdListIndex) {
	float* out = (float*)env->GetPrimitiveArrayCritical(obj_out, 0);


//@line:175

		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, vtx_buffer, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
	
	env->ReleasePrimitiveArrayCritical(obj_out, out, 0);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_getIdxBuffer(JNIEnv* env, jclass clazz, jshortArray obj_out, jint cmdListIndex) {
	short* out = (short*)env->GetPrimitiveArrayCritical(obj_out, 0);


//@line:184

		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, idx_buffer, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
	
	env->ReleasePrimitiveArrayCritical(obj_out, out, 0);

}

JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTotalVtxCount(JNIEnv* env, jclass clazz) {


//@line:193

	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->TotalVtxCount;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeUserGuide(JNIEnv* env, jclass clazz) {


//@line:201

	 	ImGui::ShowUserGuide();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeTestWindow(JNIEnv* env, jclass clazz) {


//@line:205

	 	ImGui::ShowTestWindow();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showMetricsWindow(JNIEnv* env, jclass clazz) {


//@line:209

	 	ImGui::ShowTestWindow();
	

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2I
(JNIEnv* env, jclass clazz, jstring obj_name, jint flags, char* name) {

//@line:223

    return ImGui::Begin(name, NULL, flags);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_name, jint flags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2I(env, clazz, obj_name, flags, name);

	env->ReleaseStringUTFChars(obj_name, name);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2I
(JNIEnv* env, jclass clazz, jstring obj_name, jobject openRef, jint flags, char* name) {

//@line:232

        bool open = getImBool(env, openRef);
	bool collapsed = ImGui::Begin(name, &open, flags);
	setImBool(env, openRef, open);
	return collapsed;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2I(JNIEnv* env, jclass clazz, jstring obj_name, jobject openRef, jint flags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2I(env, clazz, obj_name, openRef, flags, name);

	env->ReleaseStringUTFChars(obj_name, name);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_end(JNIEnv* env, jclass clazz) {


//@line:239
 ImGui::End(); 

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI
(JNIEnv* env, jclass clazz, jstring obj_id, jfloat width, jfloat height, jboolean border, jint extraWindowFlags, char* id) {

//@line:250

	 	return ImGui::BeginChild(id, ImVec2(width, height), border, extraWindowFlags);
	
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI(JNIEnv* env, jclass clazz, jstring obj_id, jfloat width, jfloat height, jboolean border, jint extraWindowFlags) {
	char* id = (char*)env->GetStringUTFChars(obj_id, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI(env, clazz, obj_id, width, height, border, extraWindowFlags, id);

	env->ReleaseStringUTFChars(obj_id, id);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__IFFI(JNIEnv* env, jclass clazz, jint id, jfloat width, jfloat height, jint extraWindowFlags) {


//@line:254

	 	return ImGui::BeginChild(id, ImVec2(width, height), false, extraWindowFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_endChild(JNIEnv* env, jclass clazz) {


//@line:258

		ImGui::EndChild();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionMax(JNIEnv* env, jclass clazz) {


//@line:263

		return toGdxVec2(env, ImGui::GetContentRegionMax());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvail(JNIEnv* env, jclass clazz) {


//@line:268

		return toGdxVec2(env, ImGui::GetContentRegionAvail());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvailWidth(JNIEnv* env, jclass clazz) {


//@line:272

		return ImGui::GetContentRegionAvailWidth();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMin(JNIEnv* env, jclass clazz) {


//@line:277

		return toGdxVec2(env, ImGui::GetWindowContentRegionMin());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMax(JNIEnv* env, jclass clazz) {


//@line:282

		return toGdxVec2(env, ImGui::GetWindowContentRegionMax());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionWidth(JNIEnv* env, jclass clazz) {


//@line:286

	 	return ImGui::GetWindowContentRegionWidth();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowPos(JNIEnv* env, jclass clazz) {


//@line:295

		return toGdxVec2(env, ImGui::GetWindowPos());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowSize(JNIEnv* env, jclass clazz) {


//@line:300

		return toGdxVec2(env, ImGui::GetWindowSize());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowWidth(JNIEnv* env, jclass clazz) {


//@line:304

	 	return ImGui::GetWindowWidth();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowHeight(JNIEnv* env, jclass clazz) {


//@line:308

	 	return ImGui::GetWindowHeight();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_isWindowCollapsed(JNIEnv* env, jclass clazz) {


//@line:312

	 	return ImGui::IsWindowCollapsed();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFontScale(JNIEnv* env, jclass clazz, jfloat scale) {


//@line:316

	 	ImGui::SetWindowFontScale(scale);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPos(JNIEnv* env, jclass clazz, jfloat x, jfloat y, jint condFlags) {


//@line:329

		ImGui::SetNextWindowPos(ImVec2(x, y), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPosCenter(JNIEnv* env, jclass clazz, jint condFlags) {


//@line:340

		ImGui::SetNextWindowPosCenter(condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSize(JNIEnv* env, jclass clazz, jfloat width, jfloat height, jint condFlags) {


//@line:351

		ImGui::SetNextWindowSize(ImVec2(width, height), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSizeConstraints(JNIEnv* env, jclass clazz, jfloat minWidth, jfloat minHeight, jfloat maxWidth, jfloat maxHeight) {


//@line:357

		ImGuiSizeConstraintCallback custom_callback = NULL;
		void* custom_callback_data = NULL;
		ImGui::SetNextWindowSizeConstraints(ImVec2(minWidth, minHeight), ImVec2(maxWidth, maxHeight), custom_callback, custom_callback_data);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentSize(JNIEnv* env, jclass clazz, jfloat width, jfloat height) {


//@line:364

		ImGui::SetNextWindowContentSize(ImVec2(width, height));
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentWidth(JNIEnv* env, jclass clazz, jfloat width) {


//@line:369

		ImGui::SetNextWindowContentWidth(width);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowCollapsed(JNIEnv* env, jclass clazz, jboolean collapsed, jint condFlags) {


//@line:379

	 	ImGui::SetNextWindowCollapsed(collapsed, condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowFocus(JNIEnv* env, jclass clazz) {


//@line:384
 ImGui::SetNextWindowFocus(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__FFI(JNIEnv* env, jclass clazz, jfloat x, jfloat y, jint condFlags) {


//@line:394
 ImGui::SetWindowPos(ImVec2(x, y), condFlags); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__FFI(JNIEnv* env, jclass clazz, jfloat width, jfloat height, jint condFlags) {


//@line:403

		ImGui::SetWindowSize(ImVec2(width, height), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__ZI(JNIEnv* env, jclass clazz, jboolean collapsed, jint condFlags) {


//@line:413
 ImGui::SetWindowCollapsed(collapsed, condFlags); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__(JNIEnv* env, jclass clazz) {


//@line:416
 ImGui::SetWindowFocus(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat x, jfloat y, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:425

		ImGui::SetWindowPos(name, ImVec2(x, y), condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat width, jfloat height, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:436

		ImGui::SetWindowSize(name, ImVec2(width, height), condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__Ljava_lang_String_2ZI(JNIEnv* env, jclass clazz, jstring obj_name, jboolean collapsed, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:448

	 	ImGui::SetWindowCollapsed(name, collapsed, condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:453

		ImGui::SetWindowFocus(name);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollX(JNIEnv* env, jclass clazz) {


//@line:458
 return ImGui::GetScrollX(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollY(JNIEnv* env, jclass clazz) {


//@line:461
 return ImGui::GetScrollY(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxX(JNIEnv* env, jclass clazz) {


//@line:464
 return ImGui::GetScrollMaxX(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxY(JNIEnv* env, jclass clazz) {


//@line:467
 return ImGui::GetScrollMaxY(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollX(JNIEnv* env, jclass clazz, jfloat scrollX) {


//@line:470
 ImGui::SetScrollX(scrollX); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollY(JNIEnv* env, jclass clazz, jfloat scrollY) {


//@line:473
 ImGui::SetScrollY(scrollY); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollHere(JNIEnv* env, jclass clazz, jfloat centerYRatio) {


//@line:476
 ImGui::SetScrollHere(centerYRatio); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollFromPosY(JNIEnv* env, jclass clazz, jfloat posY, jfloat centerYRatio) {


//@line:479
 ImGui::SetScrollFromPosY(posY, centerYRatio); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyboardFocusHere(JNIEnv* env, jclass clazz, jint offset) {


//@line:486
 ImGui::SetKeyboardFocusHere(offset); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushStyleVar(JNIEnv* env, jclass clazz, jint idx, jfloat val) {


//@line:499

    ImGui::PushStyleVar(idx, val);
  

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getFontSize(JNIEnv* env, jclass clazz) {


//@line:513

      return ImGui::GetFontSize();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushItemWidth(JNIEnv* env, jclass clazz, jfloat itemWidth) {


//@line:525

      ImGui::PushItemWidth(itemWidth);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_separator(JNIEnv* env, jclass clazz) {


//@line:539

      ImGui::Separator();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_sameLine(JNIEnv* env, jclass clazz, jfloat posX, jfloat spacingW) {


//@line:544

      ImGui::SameLine(posX, spacingW);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_spacing(JNIEnv* env, jclass clazz) {


//@line:559

      ImGui::Spacing();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_indent(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:566

      ImGui::Indent(indentW);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_unindent(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:571

      ImGui::Unindent(indentW);
  

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getCursorScreenPos(JNIEnv* env, jclass clazz) {


//@line:586

    return toGdxVec2(env, ImGui::GetCursorScreenPos());
  

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTextLineHeight(JNIEnv* env, jclass clazz) {


//@line:594

    return ImGui::GetTextLineHeight();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_text(JNIEnv* env, jclass clazz, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:627

      ImGui::Text(str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_textDisabled(JNIEnv* env, jclass clazz, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:635

      ImGui::TextDisabled(str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_textColored(JNIEnv* env, jclass clazz, jfloat r, jfloat g, jfloat b, jfloat a, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:640

      ImGui::TextColored(ImVec4(r, g, b, a), str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_textWrapped(JNIEnv* env, jclass clazz, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:647

      ImGui::TextWrapped(str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_bullet(JNIEnv* env, jclass clazz) {


//@line:659

    ImGui::Bullet();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_bulletText(JNIEnv* env, jclass clazz, jstring obj_text) {
	char* text = (char*)env->GetStringUTFChars(obj_text, 0);


//@line:664

    ImGui::BulletText(text);
  
	env->ReleaseStringUTFChars(obj_text, text);

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_smallButton
(JNIEnv* env, jclass clazz, jstring obj_label, char* label) {

//@line:670

    return ImGui::SmallButton(label);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_smallButton(JNIEnv* env, jclass clazz, jstring obj_label) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_smallButton(env, clazz, obj_label, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_checkbox
(JNIEnv* env, jclass clazz, jstring obj_label, jobject v, char* label) {

//@line:678

    bool p_v = getImBool(env, v);
    bool result = ImGui::Checkbox(label, &p_v);
    setImBool(env, v, p_v);
    return result;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_checkbox(JNIEnv* env, jclass clazz, jstring obj_label, jobject v) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_checkbox(env, clazz, obj_label, v, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_sliderFloat
(JNIEnv* env, jclass clazz, jstring obj_label, jobject v, jfloat vMin, jfloat vMax, jstring obj_displayFormat, jfloat power, char* label, char* displayFormat) {

//@line:730

    float f = getImFloat(env, v);
    bool returnValue = ImGui::SliderFloat(label, &f, vMin, vMax, displayFormat, power);
    setImFloat(env, v, f);
    return returnValue;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_sliderFloat(JNIEnv* env, jclass clazz, jstring obj_label, jobject v, jfloat vMin, jfloat vMax, jstring obj_displayFormat, jfloat power) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);
	char* displayFormat = (char*)env->GetStringUTFChars(obj_displayFormat, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_sliderFloat(env, clazz, obj_label, v, vMin, vMax, obj_displayFormat, power, label, displayFormat);

	env->ReleaseStringUTFChars(obj_label, label);
	env->ReleaseStringUTFChars(obj_displayFormat, displayFormat);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNode
(JNIEnv* env, jclass clazz, jstring obj_label, char* label) {

//@line:753

    return ImGui::TreeNode(label);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_treeNode(JNIEnv* env, jclass clazz, jstring obj_label) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNode(env, clazz, obj_label, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNodeEx
(JNIEnv* env, jclass clazz, jstring obj_label, jint flags, char* label) {

//@line:758

    return ImGui::TreeNodeEx(label, flags);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_treeNodeEx(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNodeEx(env, clazz, obj_label, flags, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_treePop(JNIEnv* env, jclass clazz) {


//@line:774

     ImGui::TreePop();
  

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTreeNodeToLabelSpacing(JNIEnv* env, jclass clazz) {


//@line:780

    return ImGui::GetTreeNodeToLabelSpacing();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2I
(JNIEnv* env, jclass clazz, jstring obj_label, jint flags, char* label) {

//@line:788

      return ImGui::CollapsingHeader(label, flags);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2I(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2I(env, clazz, obj_label, flags, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2
(JNIEnv* env, jclass clazz, jstring obj_label, jobject v, char* label) {

//@line:792

      bool p_v = getImBool(env, v);
      bool result = ImGui::CollapsingHeader(label, &p_v);
      setImBool(env, v, p_v);
      return result;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(JNIEnv* env, jclass clazz, jstring obj_label, jobject v) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(env, clazz, obj_label, v, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenuBar(JNIEnv* env, jclass clazz) {


//@line:833

    return ImGui::BeginMenuBar();
  

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenuBar(JNIEnv* env, jclass clazz) {


//@line:837

    ImGui::EndMenuBar();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginMenu
(JNIEnv* env, jclass clazz, jstring obj_label, jboolean enabled, char* label) {

//@line:842

    return ImGui::BeginMenu(label, enabled);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenu(JNIEnv* env, jclass clazz, jstring obj_label, jboolean enabled) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginMenu(env, clazz, obj_label, enabled, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenu(JNIEnv* env, jclass clazz) {


//@line:850

    ImGui::EndMenu();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ
(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jboolean selected, jboolean enabled, char* label, char* shortcut) {

//@line:863

      return ImGui::MenuItem(label, shortcut, selected, enabled);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jboolean selected, jboolean enabled) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);
	char* shortcut = (char*)env->GetStringUTFChars(obj_shortcut, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ(env, clazz, obj_label, obj_shortcut, selected, enabled, label, shortcut);

	env->ReleaseStringUTFChars(obj_label, label);
	env->ReleaseStringUTFChars(obj_shortcut, shortcut);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2
(JNIEnv* env, jclass clazz, jstring obj_label, jobject selected, char* label) {

//@line:868

      bool p_selected = getImBool(env, selected);
      bool result = ImGui::MenuItem(label, NULL, &p_selected);
      setImBool(env, selected, p_selected);
      return result;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(JNIEnv* env, jclass clazz, jstring obj_label, jobject selected) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(env, clazz, obj_label, selected, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2
(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jobject selected, char* label, char* shortcut) {

//@line:875

      bool p_selected = getImBool(env, selected);
      bool result = ImGui::MenuItem(label, shortcut, &p_selected);
      setImBool(env, selected, p_selected);
      return result;
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jobject selected) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);
	char* shortcut = (char*)env->GetStringUTFChars(obj_shortcut, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2Lcom_borschlab_gdx_imgui_ImBool_2(env, clazz, obj_label, obj_shortcut, selected, label, shortcut);

	env->ReleaseStringUTFChars(obj_label, label);
	env->ReleaseStringUTFChars(obj_shortcut, shortcut);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_logButtons(JNIEnv* env, jclass clazz) {


//@line:900

      ImGui::LogButtons();
  

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isItemClicked(JNIEnv* env, jclass clazz, jint mouseButton) {


//@line:916

    return ImGui::IsItemClicked(mouseButton);
  

}

JNIEXPORT jstring JNICALL Java_com_borschlab_gdx_imgui_ImGui_getVersion(JNIEnv* env, jclass clazz) {


//@line:984

    return env->NewStringUTF(ImGui::GetVersion());
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_addRectFilled(JNIEnv* env, jclass clazz, jfloat a_x, jfloat a_y, jfloat b_x, jfloat b_y, jint color, jfloat rounding, jint roundingCornersFlag) {


//@line:1011

    ImGui::GetWindowDrawList()->AddRectFilled(ImVec2(a_x, a_y), ImVec2(b_x, b_y), color, rounding, roundingCornersFlag);
  

}

