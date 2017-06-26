#include <com.borschlab.gdx.imgui.ImGui.h>

//@line:12

                #include <imgui.h>
		#include <utils.h>
	 JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTexDataAsRGBA32(JNIEnv* env, jclass clazz) {


//@line:23

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


//@line:48
 ImGui::GetIO().KeyMap[key] = value; 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDeltaTime(JNIEnv* env, jclass clazz) {


//@line:50
 ImGui::GetIO().DeltaTime; 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDisplaySize(JNIEnv* env, jclass clazz, jfloat width, jfloat height) {


//@line:52

                ImGuiIO& io = ImGui::GetIO();
	 	io.DisplaySize = ImVec2(width, height);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setDeltaTime(JNIEnv* env, jclass clazz, jfloat value) {


//@line:57

		ImGuiIO& io = ImGui::GetIO();
	 	io.DeltaTime = value > 0.0 ? value : (float)(1.0f/60.0f);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMousePos(JNIEnv* env, jclass clazz, jfloat x, jfloat y) {


//@line:62

	 	ImGuiIO& io = ImGui::GetIO();
	 	io.MousePos = ImVec2(x, y);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseDown(JNIEnv* env, jclass clazz, jint index, jboolean buttonPressed) {


//@line:67

		ImGuiIO& io = ImGui::GetIO();
		io.MouseDown[index] = buttonPressed;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyDown(JNIEnv* env, jclass clazz, jint keycode, jboolean set) {


//@line:72

		ImGuiIO& io = ImGui::GetIO();
		io.KeysDown[keycode] = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyCtrl(JNIEnv* env, jclass clazz, jboolean set) {


//@line:77

		ImGuiIO& io = ImGui::GetIO();
		io.KeyCtrl = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyShift(JNIEnv* env, jclass clazz, jboolean set) {


//@line:82

		ImGuiIO& io = ImGui::GetIO();
		io.KeyShift = set;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyAlt(JNIEnv* env, jclass clazz, jboolean set) {


//@line:87

		ImGuiIO& io = ImGui::GetIO();
		io.KeyAlt = set;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isKeysDown(JNIEnv* env, jclass clazz, jint keycode) {


//@line:92

		ImGuiIO& io = ImGui::GetIO();
		return io.KeysDown[keycode];
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_addInputCharacter(JNIEnv* env, jclass clazz, jchar character) {


//@line:97

	 	ImGuiIO& io = ImGui::GetIO();
	 	io.AddInputCharacter(character);
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isMouseHoveringAnyWindow(JNIEnv* env, jclass clazz) {


//@line:102

		return ImGui::IsMouseHoveringAnyWindow();
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureMouse(JNIEnv* env, jclass clazz) {


//@line:106

	 	return ImGui::GetIO().WantCaptureMouse;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantCaptureKeyboard(JNIEnv* env, jclass clazz) {


//@line:110

	 	return ImGui::GetIO().WantCaptureKeyboard;
	

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_wantTextInput(JNIEnv* env, jclass clazz) {


//@line:114

	 	return ImGui::GetIO().WantTextInput;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setMouseWheel(JNIEnv* env, jclass clazz, jfloat value) {


//@line:118

		ImGuiIO& io = ImGui::GetIO();
	 	io.MouseWheel = value;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_newFrame(JNIEnv* env, jclass clazz) {


//@line:123

	 	ImGui::NewFrame();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_render(JNIEnv* env, jclass clazz) {


//@line:127

	 	ImGui::Render();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_shutdown(JNIEnv* env, jclass clazz) {


//@line:131

	 	ImGui::Shutdown();
	

}

JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawListCount(JNIEnv* env, jclass clazz) {


//@line:135

	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->CmdListsCount;
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getDrawList(JNIEnv* env, jclass clazz, jint index) {


//@line:140

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


//@line:174

		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, vtx_buffer, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
	
	env->ReleasePrimitiveArrayCritical(obj_out, out, 0);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_getIdxBuffer(JNIEnv* env, jclass clazz, jshortArray obj_out, jint cmdListIndex) {
	short* out = (short*)env->GetPrimitiveArrayCritical(obj_out, 0);


//@line:183

		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, idx_buffer, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
	
	env->ReleasePrimitiveArrayCritical(obj_out, out, 0);

}

JNIEXPORT jint JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTotalVtxCount(JNIEnv* env, jclass clazz) {


//@line:192

	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->TotalVtxCount;
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeUserGuide(JNIEnv* env, jclass clazz) {


//@line:200

	 	ImGui::ShowUserGuide();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showNativeTestWindow(JNIEnv* env, jclass clazz) {


//@line:204

	 	ImGui::ShowTestWindow();
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_showMetricsWindow(JNIEnv* env, jclass clazz) {


//@line:208

	 	ImGui::ShowTestWindow();
	

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_begin__Ljava_lang_String_2I
(JNIEnv* env, jclass clazz, jstring obj_name, jint flags, char* name) {

//@line:222

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

//@line:231

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


//@line:238
 ImGui::End(); 

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI
(JNIEnv* env, jclass clazz, jstring obj_id, jfloat width, jfloat height, jboolean border, jint extraWindowFlags, char* id) {

//@line:249

	 	return ImGui::BeginChild(id, ImVec2(width, height), border, extraWindowFlags);
	
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI(JNIEnv* env, jclass clazz, jstring obj_id, jfloat width, jfloat height, jboolean border, jint extraWindowFlags) {
	char* id = (char*)env->GetStringUTFChars(obj_id, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginChild__Ljava_lang_String_2FFZI(env, clazz, obj_id, width, height, border, extraWindowFlags, id);

	env->ReleaseStringUTFChars(obj_id, id);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginChild__IFFI(JNIEnv* env, jclass clazz, jint id, jfloat width, jfloat height, jint extraWindowFlags) {


//@line:253

	 	return ImGui::BeginChild(id, ImVec2(width, height), false, extraWindowFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_endChild(JNIEnv* env, jclass clazz) {


//@line:257

		ImGui::EndChild();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionMax(JNIEnv* env, jclass clazz) {


//@line:262

		return toGdxVec2(env, ImGui::GetContentRegionMax());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvail(JNIEnv* env, jclass clazz) {


//@line:267

		return toGdxVec2(env, ImGui::GetContentRegionAvail());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getContentRegionAvailWidth(JNIEnv* env, jclass clazz) {


//@line:271

		return ImGui::GetContentRegionAvailWidth();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMin(JNIEnv* env, jclass clazz) {


//@line:276

		return toGdxVec2(env, ImGui::GetWindowContentRegionMin());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionMax(JNIEnv* env, jclass clazz) {


//@line:281

		return toGdxVec2(env, ImGui::GetWindowContentRegionMax());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowContentRegionWidth(JNIEnv* env, jclass clazz) {


//@line:285

	 	return ImGui::GetWindowContentRegionWidth();
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowPos(JNIEnv* env, jclass clazz) {


//@line:294

		return toGdxVec2(env, ImGui::GetWindowPos());
	

}

JNIEXPORT jobject JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowSize(JNIEnv* env, jclass clazz) {


//@line:299

		return toGdxVec2(env, ImGui::GetWindowSize());
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowWidth(JNIEnv* env, jclass clazz) {


//@line:303

	 	return ImGui::GetWindowWidth();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getWindowHeight(JNIEnv* env, jclass clazz) {


//@line:307

	 	return ImGui::GetWindowHeight();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_isWindowCollapsed(JNIEnv* env, jclass clazz) {


//@line:311

	 	return ImGui::IsWindowCollapsed();
	

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFontScale(JNIEnv* env, jclass clazz, jfloat scale) {


//@line:315

	 	ImGui::SetWindowFontScale(scale);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPos(JNIEnv* env, jclass clazz, jfloat x, jfloat y, jint condFlags) {


//@line:328

		ImGui::SetNextWindowPos(ImVec2(x, y), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowPosCenter(JNIEnv* env, jclass clazz, jint condFlags) {


//@line:339

		ImGui::SetNextWindowPosCenter(condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSize(JNIEnv* env, jclass clazz, jfloat width, jfloat height, jint condFlags) {


//@line:350

		ImGui::SetNextWindowSize(ImVec2(width, height), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowSizeConstraints(JNIEnv* env, jclass clazz, jfloat minWidth, jfloat minHeight, jfloat maxWidth, jfloat maxHeight) {


//@line:356

		ImGuiSizeConstraintCallback custom_callback = NULL;
		void* custom_callback_data = NULL;
		ImGui::SetNextWindowSizeConstraints(ImVec2(minWidth, minHeight), ImVec2(maxWidth, maxHeight), custom_callback, custom_callback_data);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentSize(JNIEnv* env, jclass clazz, jfloat width, jfloat height) {


//@line:363

		ImGui::SetNextWindowContentSize(ImVec2(width, height));
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowContentWidth(JNIEnv* env, jclass clazz, jfloat width) {


//@line:368

		ImGui::SetNextWindowContentWidth(width);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowCollapsed(JNIEnv* env, jclass clazz, jboolean collapsed, jint condFlags) {


//@line:378

	 	ImGui::SetNextWindowCollapsed(collapsed, condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setNextWindowFocus(JNIEnv* env, jclass clazz) {


//@line:383
 ImGui::SetNextWindowFocus(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__FFI(JNIEnv* env, jclass clazz, jfloat x, jfloat y, jint condFlags) {


//@line:393
 ImGui::SetWindowPos(ImVec2(x, y), condFlags); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__FFI(JNIEnv* env, jclass clazz, jfloat width, jfloat height, jint condFlags) {


//@line:402

		ImGui::SetWindowSize(ImVec2(width, height), condFlags);
	

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__ZI(JNIEnv* env, jclass clazz, jboolean collapsed, jint condFlags) {


//@line:412
 ImGui::SetWindowCollapsed(collapsed, condFlags); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__(JNIEnv* env, jclass clazz) {


//@line:415
 ImGui::SetWindowFocus(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowPos__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat x, jfloat y, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:424

		ImGui::SetWindowPos(name, ImVec2(x, y), condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowSize__Ljava_lang_String_2FFI(JNIEnv* env, jclass clazz, jstring obj_name, jfloat width, jfloat height, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:435

		ImGui::SetWindowSize(name, ImVec2(width, height), condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowCollapsed__Ljava_lang_String_2ZI(JNIEnv* env, jclass clazz, jstring obj_name, jboolean collapsed, jint condFlags) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:447

	 	ImGui::SetWindowCollapsed(name, collapsed, condFlags);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setWindowFocus__Ljava_lang_String_2(JNIEnv* env, jclass clazz, jstring obj_name) {
	char* name = (char*)env->GetStringUTFChars(obj_name, 0);


//@line:452

		ImGui::SetWindowFocus(name);
	
	env->ReleaseStringUTFChars(obj_name, name);

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollX(JNIEnv* env, jclass clazz) {


//@line:457
 return ImGui::GetScrollX(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollY(JNIEnv* env, jclass clazz) {


//@line:460
 return ImGui::GetScrollY(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxX(JNIEnv* env, jclass clazz) {


//@line:463
 return ImGui::GetScrollMaxX(); 

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getScrollMaxY(JNIEnv* env, jclass clazz) {


//@line:466
 return ImGui::GetScrollMaxY(); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollX(JNIEnv* env, jclass clazz, jfloat scrollX) {


//@line:469
 ImGui::SetScrollX(scrollX); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollY(JNIEnv* env, jclass clazz, jfloat scrollY) {


//@line:472
 ImGui::SetScrollY(scrollY); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollHere(JNIEnv* env, jclass clazz, jfloat centerYRatio) {


//@line:475
 ImGui::SetScrollHere(centerYRatio); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setScrollFromPosY(JNIEnv* env, jclass clazz, jfloat posY, jfloat centerYRatio) {


//@line:478
 ImGui::SetScrollFromPosY(posY, centerYRatio); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_setKeyboardFocusHere(JNIEnv* env, jclass clazz, jint offset) {


//@line:485
 ImGui::SetKeyboardFocusHere(offset); 

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushStyleVar(JNIEnv* env, jclass clazz, jint idx, jfloat val) {


//@line:498

    ImGui::PushStyleVar(idx, val);
  

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getFontSize(JNIEnv* env, jclass clazz) {


//@line:512

      return ImGui::GetFontSize();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_pushItemWidth(JNIEnv* env, jclass clazz, jfloat itemWidth) {


//@line:524

      ImGui::PushItemWidth(itemWidth);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_separator(JNIEnv* env, jclass clazz) {


//@line:538

      ImGui::Separator();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_sameLine(JNIEnv* env, jclass clazz, jfloat posX, jfloat spacingW) {


//@line:543

      ImGui::SameLine(posX, spacingW);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_spacing(JNIEnv* env, jclass clazz) {


//@line:558

      ImGui::Spacing();
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_indent(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:565

      ImGui::Indent(indentW);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_unindent(JNIEnv* env, jclass clazz, jfloat indentW) {


//@line:570

      ImGui::Unindent(indentW);
  

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_text(JNIEnv* env, jclass clazz, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:615

      ImGui::Text(str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_textWrapped(JNIEnv* env, jclass clazz, jstring obj_str) {
	char* str = (char*)env->GetStringUTFChars(obj_str, 0);


//@line:629

      ImGui::TextWrapped(str);
  
	env->ReleaseStringUTFChars(obj_str, str);

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_smallButton
(JNIEnv* env, jclass clazz, jstring obj_label, char* label) {

//@line:645

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

//@line:653

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

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNode
(JNIEnv* env, jclass clazz, jstring obj_label, char* label) {

//@line:718

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

//@line:723

    return ImGui::TreeNodeEx(label, flags);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_treeNodeEx(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_treeNodeEx(env, clazz, obj_label, flags, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT void JNICALL Java_com_borschlab_gdx_imgui_ImGui_treePop(JNIEnv* env, jclass clazz) {


//@line:739

     ImGui::TreePop();
  

}

JNIEXPORT jfloat JNICALL Java_com_borschlab_gdx_imgui_ImGui_getTreeNodeToLabelSpacing(JNIEnv* env, jclass clazz) {


//@line:745

    return ImGui::GetTreeNodeToLabelSpacing();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader
(JNIEnv* env, jclass clazz, jstring obj_label, jint flags, char* label) {

//@line:753

      return ImGui::CollapsingHeader(label, flags);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader(JNIEnv* env, jclass clazz, jstring obj_label, jint flags) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_collapsingHeader(env, clazz, obj_label, flags, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenuBar(JNIEnv* env, jclass clazz) {


//@line:791

    return ImGui::BeginMenuBar();
  

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenuBar(JNIEnv* env, jclass clazz) {


//@line:795

    ImGui::EndMenuBar();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginMenu
(JNIEnv* env, jclass clazz, jstring obj_label, jboolean enabled, char* label) {

//@line:800

    return ImGui::BeginMenu(label, enabled);
  
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_beginMenu(JNIEnv* env, jclass clazz, jstring obj_label, jboolean enabled) {
	char* label = (char*)env->GetStringUTFChars(obj_label, 0);

	jboolean JNI_returnValue = wrapped_Java_com_borschlab_gdx_imgui_ImGui_beginMenu(env, clazz, obj_label, enabled, label);

	env->ReleaseStringUTFChars(obj_label, label);

	return JNI_returnValue;
}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_endMenu(JNIEnv* env, jclass clazz) {


//@line:808

    ImGui::EndMenu();
  

}

static inline jboolean wrapped_Java_com_borschlab_gdx_imgui_ImGui_menuItem__Ljava_lang_String_2Ljava_lang_String_2ZZ
(JNIEnv* env, jclass clazz, jstring obj_label, jstring obj_shortcut, jboolean selected, jboolean enabled, char* label, char* shortcut) {

//@line:821

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

//@line:826

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

//@line:833

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


//@line:858

      ImGui::LogButtons();
  

}

JNIEXPORT jboolean JNICALL Java_com_borschlab_gdx_imgui_ImGui_isItemClicked(JNIEnv* env, jclass clazz, jint mouseButton) {


//@line:874

    return ImGui::IsItemClicked(mouseButton);
  

}

JNIEXPORT jstring JNICALL Java_com_borschlab_gdx_imgui_ImGui_getVersion(JNIEnv* env, jclass clazz) {


//@line:942

    return env->NewStringUTF(ImGui::GetVersion());
  

}

