package com.borschlab.gdx.imgui;

import com.badlogic.gdx.math.Vector2;

/**
 * @author mcpussy
 */

@SuppressWarnings("unused")
public class ImGui {

	/*JNI
                #include <imgui.h>
		#include <utils.h>
	 */

/*	public static native void getTexDataAsAlpha8(unsigned char**out_pixels, int*out_width, int*out_height, int*out_bytes_per_pixel=NULL); *//*
                ImGuiIO& io = ImGui::GetIO();
		return io.DeltaTime;
	*/


  public static native ImGuiTexData getTexDataAsRGBA32(); /*
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
	*/

	/*public static native void setTexID(void*id) *//*
	 	TexID = id;
	 	}
	*/

  //TODO: styles

  public static native void setKeyMap(int key, int value); /* ImGui::GetIO().KeyMap[key] = value; */

  public static native float getDeltaTime(); /* ImGui::GetIO().DeltaTime; */

  public static native void setDisplaySize(float width, float height); /*
		ImGuiIO& io = ImGui::GetIO();
	 	io.DisplaySize = ImVec2(width, height);
	*/

  public static native void setDeltaTime(float value); /*
		ImGuiIO& io = ImGui::GetIO();
	 	io.DeltaTime = value > 0.0 ? value : (float)(1.0f/60.0f);
	*/

  public static native void setMousePos(float x, float y); /*
	 	ImGuiIO& io = ImGui::GetIO();
	 	io.MousePos = ImVec2(x, y);
	*/

  public static native void setMouseDown(int index, boolean buttonPressed); /*
		ImGuiIO& io = ImGui::GetIO();
		io.MouseDown[index] = buttonPressed;
	*/

  public static native void setKeyDown(int keycode, boolean set); /*
		ImGuiIO& io = ImGui::GetIO();
		io.KeysDown[keycode] = set;
	*/

  public static native void setKeyCtrl(boolean set); /*
		ImGuiIO& io = ImGui::GetIO();
		io.KeyCtrl = set;
	*/

  public static native void setKeyShift(boolean set); /*
		ImGuiIO& io = ImGui::GetIO();
		io.KeyShift = set;
	*/

  public static native void setKeyAlt(boolean set); /*
		ImGuiIO& io = ImGui::GetIO();
		io.KeyAlt = set;
	*/

  public static native boolean isKeysDown(int keycode); /*
		ImGuiIO& io = ImGui::GetIO();
		return io.KeysDown[keycode];
	*/

  public static native void addInputCharacter(char character); /*
	 	ImGuiIO& io = ImGui::GetIO();
	 	io.AddInputCharacter(character);
	*/

  public static native boolean isMouseHoveringAnyWindow(); /*
		return ImGui::IsMouseHoveringAnyWindow();
	*/

  public static native boolean wantCaptureMouse(); /*
	 	return ImGui::GetIO().WantCaptureMouse;
	*/

  public static native boolean wantCaptureKeyboard();/*
	 	return ImGui::GetIO().WantCaptureKeyboard;
	*/

  public static native boolean wantTextInput();/*
	 	return ImGui::GetIO().WantTextInput;
	*/

  public static native void setMouseWheel(float value); /*
		ImGuiIO& io = ImGui::GetIO();
	 	io.MouseWheel = value;
	*/

  public static native void newFrame(); /*
	 	ImGui::NewFrame();
	*/

  public static native void render(); /*
	 	ImGui::Render();
	*/

  public static native void shutdown(); /*
	 	ImGui::Shutdown();
	*/

  public static native int getDrawListCount(); /*
	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->CmdListsCount;
	*/

  public static native ImGuiDrawList getDrawList(int index); /*
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
	*/

  public static native void getVertBuffer(float[] out, int cmdListIndex); /*
		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawVert* vtx_buffer = cmd_list->VtxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, vtx_buffer, cmd_list->VtxBuffer.Size * sizeof(ImDrawVert));
	*/

  public static native void getIdxBuffer(short[] out, int cmdListIndex); /*
		ImDrawData* data = ImGui::GetDrawData();
		const ImDrawList* cmd_list = data->CmdLists[cmdListIndex];
		const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;

		//float* pDst = (float *)env->GetDirectBufferAddress(out);
		memcpy(out, idx_buffer, cmd_list->IdxBuffer.Size * sizeof(ImDrawIdx));
	*/

  public static native int getTotalVtxCount(); /*
	 	ImDrawData* data = ImGui::GetDrawData();
	 	return data->TotalVtxCount;
	*/


  ///////////////////////////////////////////////////////////////////////////////
  // "Native" windows
  public static native void showNativeUserGuide(); /*
	 	ImGui::ShowUserGuide();
	*/

  public static native void showNativeTestWindow(); /*
	 	ImGui::ShowTestWindow();
	*/

  public static native void showMetricsWindow(); /*
	 	ImGui::ShowTestWindow();
	*/


  ///////////////////////////////////////////////////////////////////////////////
  // Window
  // Passing 'openRef' displays a Close button on the upper-right corner of the window, the pointed value will be set to false when the button is pressed.
  // Return false when window is collapsed, so you can early out in your code. You always need to call ImGui::End() even if false is returned.

  public static boolean begin(String name) {
    return begin(name, null, 0);
  }

  public static boolean begin(String name, int flags) {
    return begin(name, null, flags);
  }

  public static boolean begin(String name, ValueRef<Boolean> openRef) {
    return begin(name, openRef, 0);
  }

  public static boolean begin(String name, ValueRef<Boolean> openRef, int flags) {
    if (openRef != null) {
      BeginWindowJniResult result = beginJni(name, openRef.get(), flags);
      openRef.set(result.isOpen);
      return result.isCollapsed;
    } else {
      return beginJni(name, flags);
    }
  }

  public static native void end(); /* ImGui::End(); */

  // begin a scrolling region. size==0.0f: use remaining window size, size<0.0f: use remaining window size minus abs(size). size>0.0f: fixed size. each axis can use a different mode, e.g. ImVec2(0,400).
  public static boolean beginChild(String id, float width, float height) {
    return beginChild(id, width, height, false, 0);
  }

  public static boolean beginChild(int id, float width, float height) {
    return beginChild(id, width, height, 0);
  }

  public static native boolean beginChild(String id, float width, float height, boolean border, int extraWindowFlags); /*
	 	return ImGui::BeginChild(id, ImVec2(width, height), border, extraWindowFlags);
	*/

  public static native boolean beginChild(int id, float width, float height, int extraWindowFlags); /*
	 	return ImGui::BeginChild(id, ImVec2(width, height), false, extraWindowFlags);
	*/

  public static native void endChild(); /*
		ImGui::EndChild();
	*/

  // current content boundaries (typically window boundaries including scrolling, or current column boundaries), in windows coordinates
  public static native Vector2 getContentRegionMax(); /*
		return toGdxVec2(env, ImGui::GetContentRegionMax());
	*/

  // == GetContentRegionMax() - GetCursorPos()
  public static native Vector2 getContentRegionAvail(); /*
		return toGdxVec2(env, ImGui::GetContentRegionAvail());
	*/

  public static native float getContentRegionAvailWidth(); /*
		return ImGui::GetContentRegionAvailWidth();
	*/

  // content boundaries min (roughly (0,0)-Scroll), in window coordinates
  public static native Vector2 getWindowContentRegionMin(); /*
		return toGdxVec2(env, ImGui::GetWindowContentRegionMin());
	*/

  // content boundaries max (roughly (0,0)+Size-Scroll) where Size can be override with SetNextWindowContentSize(), in window coordinates
  public static native Vector2 getWindowContentRegionMax(); /*
		return toGdxVec2(env, ImGui::GetWindowContentRegionMax());
	*/

  public static native float getWindowContentRegionWidth(); /*
	 	return ImGui::GetWindowContentRegionWidth();
	*/

  // TODO: this
  // get rendering command-list if you want to append your own draw primitives
  // ImDrawList*   GetWindowDrawList();

  // get current window position in screen space (useful if you want to do your own drawing via the DrawList api)
  public static native Vector2 getWindowPos(); /*
		return toGdxVec2(env, ImGui::GetWindowPos());
	*/

  // get current window size
  public static native Vector2 getWindowSize(); /*
		return toGdxVec2(env, ImGui::GetWindowSize());
	*/

  public static native float getWindowWidth(); /*
	 	return ImGui::GetWindowWidth();
	*/

  public static native float getWindowHeight(); /*
	 	return ImGui::GetWindowHeight();
	*/

  public static native float isWindowCollapsed(); /*
	 	return ImGui::IsWindowCollapsed();
	*/

  public static native float setWindowFontScale(float scale); /*
	 	ImGui::SetWindowFontScale(scale);
	*/

  //////////////////////////////////////////////////////////////////////////////////////////
  // window position/size
  // set next window position. call before Begin()
  public static void setNextWindowPos(float x, float y) {
    setNextWindowPos(x, y, 0);
  }

  // set next window position. call before Begin()
  // ImGuiSetCond condFlags
  public static native void setNextWindowPos(float x, float y, int condFlags); /*
		ImGui::SetNextWindowPos(ImVec2(x, y), condFlags);
	*/

  // set next window position to be centered on screen. call before Begin()
  public static void setNextWindowPosCenter() {
    setNextWindowPosCenter(0);
  }

  // set next window position to be centered on screen. call before Begin()
  // ImGuiSetCond condFlags
  public static native void setNextWindowPosCenter(int condFlags);/*
		ImGui::SetNextWindowPosCenter(condFlags);
	*/

  // set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()
  public static void setNextWindowSize(float width, float height) {
    setNextWindowSize(width, height, 0);
  }

  // set next window size. set axis to 0.0f to force an auto-fit on this axis. call before Begin()
  // ImGuiSetCond condFlags
  public static native void setNextWindowSize(float width, float height, int condFlags); /*
		ImGui::SetNextWindowSize(ImVec2(width, height), condFlags);
	*/

  // set next window size limits. use -1,-1 on either X/Y axis to preserve the current size. Use callback to apply non-trivial programmatic constraints.
  // TODO: implement callbacks
  public static native void setNextWindowSizeConstraints(float minWidth, float minHeight, float maxWidth, float maxHeight); /*
		ImGuiSizeConstraintCallback custom_callback = NULL;
		void* custom_callback_data = NULL;
		ImGui::SetNextWindowSizeConstraints(ImVec2(minWidth, minHeight), ImVec2(maxWidth, maxHeight), custom_callback, custom_callback_data);
	*/

  // set next window content size (enforce the range of scrollbars). set axis to 0.0f to leave it automatic. call before Begin()
  public static native void setNextWindowContentSize(float width, float height); /*
		ImGui::SetNextWindowContentSize(ImVec2(width, height));
	*/

  // set next window content width (enforce the range of horizontal scrollbar). call before Begin()
  public static native void setNextWindowContentWidth(float width); /*
		ImGui::SetNextWindowContentWidth(width);
	*/

  // set next window collapsed state. call before Begin()
  public static void setNextWindowCollapsed(boolean collapsed) {
    setNextWindowCollapsed(collapsed, 0);
  }

  // set next window collapsed state. call before Begin()
  public static native void setNextWindowCollapsed(boolean collapsed, int condFlags); /*
	 	ImGui::SetNextWindowCollapsed(collapsed, condFlags);
	*/

  // set next window to be focused / front-most. call before Begin()
  public static native void setNextWindowFocus(); /* ImGui::SetNextWindowFocus(); */

  // (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
  // set next window position. call before Begin()
  public static void setWindowPos(float x, float y) {
    setWindowPos(x, y, 0);
  }

  // (not recommended) set current window position - call within Begin()/End(). prefer using SetNextWindowPos(), as this may incur tearing and side-effects.
  // ImGuiSetCond condFlags
  public static native void setWindowPos(float x, float y, int condFlags); /* ImGui::SetWindowPos(ImVec2(x, y), condFlags); */

  // (not recommended) set current window size - call within Begin()/End(). set to ImVec2(0,0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
  public static void setWindowSize(float width, float height) {
    setWindowSize(width, height, 0);
  }

  // (not recommended) set current window size - call within Begin()/End(). set to ImVec2(0,0) to force an auto-fit. prefer using SetNextWindowSize(), as this may incur tearing and minor side-effects.
  // ImGuiSetCond condFlags
  public static native void setWindowSize(float width, float height, int condFlags); /*
		ImGui::SetWindowSize(ImVec2(width, height), condFlags);
	*/

  // (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
  public static void setWindowCollapsed(boolean collapsed) {
    setWindowCollapsed(collapsed, 0);
  }

  // (not recommended) set current window collapsed state. prefer using SetNextWindowCollapsed().
  public static native void setWindowCollapsed(boolean collapsed, int condFlags); /* ImGui::SetWindowCollapsed(collapsed, condFlags); */

  // (not recommended) set current window to be focused / front-most. prefer using SetNextWindowFocus().
  public static native void setWindowFocus(); /* ImGui::SetWindowFocus(); */

  // set named window position.
  public static void setWindowPos(String name, float x, float y) {
    setWindowPos(name, x, y, 0);
  }

  // set named window position.
  // ImGuiSetCond cond
  public static native void setWindowPos(String name, float x, float y, int condFlags); /*
		ImGui::SetWindowPos(name, ImVec2(x, y), condFlags);
	*/

  // set named window size. set axis to 0.0f to force an auto-fit on this axis.
  public static void setWindowSize(String name, float width, float height) {
    setWindowSize(name, width, height, 0);
  }

  // set named window size. set axis to 0.0f to force an auto-fit on this axis.
  // ImGuiSetCond cond
  public static native void setWindowSize(String name, float width, float height, int condFlags); /*
		ImGui::SetWindowSize(name, ImVec2(width, height), condFlags);
	*/

  // set named window collapsed state
  // ImGuiSetCond cond
  public static void setWindowCollapsed(String name, boolean collapsed) {
    setWindowCollapsed(name, collapsed, 0);
  }

  // set named window collapsed state
  // ImGuiSetCond cond
  public static native void setWindowCollapsed(String name, boolean collapsed, int condFlags); /*
	 	ImGui::SetWindowCollapsed(name, collapsed, condFlags);
	*/

  // set named window focused
  public static native void setWindowFocus(String name); /*
		ImGui::SetWindowFocus(name);
	*/

  // get scrolling amount [0..GetScrollMaxX()]
  public static native float getScrollX(); /* return ImGui::GetScrollX(); */

  // get scrolling amount [0..GetScrollMaxY()]
  public static native float getScrollY();/* return ImGui::GetScrollY(); */

  // get maximum scrolling amount ~~ ContentSize.X - WindowSize.X
  public static native float getScrollMaxX(); /* return ImGui::GetScrollMaxX(); */

  // get maximum scrolling amount ~~ ContentSize.Y - WindowSize.Y
  public static native float getScrollMaxY(); /* return ImGui::GetScrollMaxY(); */

  // set scrolling amount [0..GetScrollMaxX()]
  public static native void setScrollX(float scrollX); /* ImGui::SetScrollX(scrollX); */

  // set scrolling amount [0..GetScrollMaxY()]
  public static native void setScrollY(float scrollY); /* ImGui::SetScrollY(scrollY); */

  // adjust scrolling amount to make current cursor position visible. center_y_ratio=0.0: top, 0.5: center, 1.0: bottom.
  public static native void setScrollHere(float centerYRatio); /* ImGui::SetScrollHere(centerYRatio); */

  // adjust scrolling amount to make given position valid. use GetCursorPos() or GetCursorStartPos()+offset to get valid positions.
  public static native void setScrollFromPosY(float posY, float centerYRatio); /* ImGui::SetScrollFromPosY(posY, centerYRatio); */

  // focus keyboard on the next widget. Use positive 'offset' to access sub components of a multiple component widget. Use negative 'offset' to access previous widgets.
  public static void setKeyboardFocusHere() {
    setKeyboardFocusHere(0);
  }

  public static native void setKeyboardFocusHere(int offset); /* ImGui::SetKeyboardFocusHere(offset); */

  // TODO: this
  // replace tree state storage with our own (if you want to manipulate it yourself, typically clear subsection of it)
  // void          SetStateStorage(ImGuiStorage* tree);
  // ImGuiStorage* GetStateStorage();

  // Parameters stacks (shared)
  // void          PushFont(ImFont* font);                                             // use NULL as a shortcut to push default font
  // void          PopFont();
  // void          PushStyleColor(ImGuiCol idx, const ImVec4& col);
  // void          PopStyleColor(int count = 1);
  // void          PushStyleVar(ImGuiStyleVar idx, float val);
  // void          PushStyleVar(ImGuiStyleVar idx, const ImVec2& val);
  // void          PopStyleVar(int count = 1);
  // ImFont*       GetFont();                                                          // get current font
  // float         GetFontSize();                                                      // get current font size (= height in pixels) of current font with current scale applied
  // ImVec2        GetFontTexUvWhitePixel();                                           // get UV coordinate for a while pixel, useful to draw custom shapes via the ImDrawList API
  // ImU32         GetColorU32(ImGuiCol idx, float alpha_mul = 1.0f);                  // retrieve given style color with style alpha applied and optional extra alpha multiplier
  // ImU32         GetColorU32(const ImVec4& col);                                     // retrieve given color with style alpha applied

  // Parameters stacks (current window)
//  IMGUI_API void          PushItemWidth(float item_width);                                    // width of items for the common item+label case, pixels. 0.0f = default to ~2/3 of windows width, >0.0f: width in pixels, <0.0f align xx pixels to the right of window (so -1.0f always align width to the right side)
//  IMGUI_API void          PopItemWidth();
//  IMGUI_API float         CalcItemWidth();                                                    // width of item given pushed settings and current cursor position
//  IMGUI_API void          PushTextWrapPos(float wrap_pos_x = 0.0f);                           // word-wrapping for Text*() commands. < 0.0f: no wrapping; 0.0f: wrap to end of window (or column); > 0.0f: wrap at 'wrap_pos_x' position in window local space
//  IMGUI_API void          PopTextWrapPos();
//  IMGUI_API void          PushAllowKeyboardFocus(bool v);                                     // allow focusing using TAB/Shift-TAB, enabled by default but you can disable it for certain widgets
//  IMGUI_API void          PopAllowKeyboardFocus();
//  IMGUI_API void          PushButtonRepeat(bool repeat);                                      // in 'repeat' mode, Button*() functions return repeated true in a typematic manner (uses io.KeyRepeatDelay/io.KeyRepeatRate for now). Note that you can call IsItemActive() after any Button() to tell if the button is held in the current frame.
//  IMGUI_API void          PopButtonRepeat();
//
//  // Cursor / Layout
  public static native void separator(); /*
      ImGui::Separator();
  */

//  IMGUI_API void          SameLine(float pos_x = 0.0f, float spacing_w = -1.0f);              // call between widgets or groups to layout them horizontally
//  IMGUI_API void          NewLine();                                                          // undo a SameLine()
//  IMGUI_API void          Spacing();                                                          // add vertical spacing
//  IMGUI_API void          Dummy(const ImVec2& size);                                          // add a dummy item of given size
//  IMGUI_API void          Indent(float indent_w = 0.0f);                                      // move content position toward the right, by style.IndentSpacing or indent_w if >0
//  IMGUI_API void          Unindent(float indent_w = 0.0f);                                    // move content position back to the left, by style.IndentSpacing or indent_w if >0
//  IMGUI_API void          BeginGroup();                                                       // lock horizontal starting position + capture group bounding box into one "item" (so you can use IsItemHovered() or layout primitives such as SameLine() on whole group, etc.)
//  IMGUI_API void          EndGroup();
//  IMGUI_API ImVec2        GetCursorPos();                                                     // cursor position is relative to window position
//  IMGUI_API float         GetCursorPosX();                                                    // "
//  IMGUI_API float         GetCursorPosY();                                                    // "
//  IMGUI_API void          SetCursorPos(const ImVec2& local_pos);                              // "
//  IMGUI_API void          SetCursorPosX(float x);                                             // "
//  IMGUI_API void          SetCursorPosY(float y);                                             // "
//  IMGUI_API ImVec2        GetCursorStartPos();                                                // initial cursor position
//  IMGUI_API ImVec2        GetCursorScreenPos();                                               // cursor position in absolute screen coordinates [0..io.DisplaySize] (useful to work with ImDrawList API)
//  IMGUI_API void          SetCursorScreenPos(const ImVec2& pos);                              // cursor position in absolute screen coordinates [0..io.DisplaySize]
//  IMGUI_API void          AlignFirstTextHeightToWidgets();                                    // call once if the first item on the line is a Text() item and you want to vertically lower it to match subsequent (bigger) widgets
//  IMGUI_API float         GetTextLineHeight();                                                // height of font == GetWindowFontSize()
//  IMGUI_API float         GetTextLineHeightWithSpacing();                                     // distance (in pixels) between 2 consecutive lines of text == GetWindowFontSize() + GetStyle().ItemSpacing.y
//  IMGUI_API float         GetItemsLineHeightWithSpacing();                                    // distance (in pixels) between 2 consecutive lines of standard height widgets == GetWindowFontSize() + GetStyle().FramePadding.y*2 + GetStyle().ItemSpacing.y
//
//  // Columns
//  // You can also use SameLine(pos_x) for simplified columning. The columns API is still work-in-progress and rather lacking.
//  IMGUI_API void          Columns(int count = 1, const char* id = NULL, bool border = true);  // setup number of columns. use an identifier to distinguish multiple column sets. close with Columns(1).
//  IMGUI_API void          NextColumn();                                                       // next column
//  IMGUI_API int           GetColumnIndex();                                                   // get current column index
//  IMGUI_API float         GetColumnOffset(int column_index = -1);                             // get position of column line (in pixels, from the left side of the contents region). pass -1 to use current column, otherwise 0..GetcolumnsCount() inclusive. column 0 is usually 0.0f and not resizable unless you call this
//  IMGUI_API void          SetColumnOffset(int column_index, float offset_x);                  // set position of column line (in pixels, from the left side of the contents region). pass -1 to use current column
//  IMGUI_API float         GetColumnWidth(int column_index = -1);                              // column width (== GetColumnOffset(GetColumnIndex()+1) - GetColumnOffset(GetColumnOffset())
//  IMGUI_API int           GetColumnsCount();                                                  // number of columns (what was passed to Columns())
//
//  // ID scopes
//  // If you are creating widgets in a loop you most likely want to push a unique identifier so ImGui can differentiate them.
//  // You can also use the "##foobar" syntax within widget label to distinguish them from each others. Read "A primer on the use of labels/IDs" in the FAQ for more details.
//  IMGUI_API void          PushID(const char* str_id);                                         // push identifier into the ID stack. IDs are hash of the *entire* stack!
//  IMGUI_API void          PushID(const char* str_id_begin, const char* str_id_end);
//  IMGUI_API void          PushID(const void* ptr_id);
//  IMGUI_API void          PushID(int int_id);
//  IMGUI_API void          PopID();
//  IMGUI_API ImGuiID       GetID(const char* str_id);                                          // calculate unique ID (hash of whole ID stack + given parameter). useful if you want to query into ImGuiStorage yourself. otherwise rarely needed
//  IMGUI_API ImGuiID       GetID(const char* str_id_begin, const char* str_id_end);
//  IMGUI_API ImGuiID       GetID(const void* ptr_id);
//
//
  // Widgets

  public static native void text(String str); /*
      ImGui::Text(str);
  */

  public static void text(String fmt, Object... args) {
    text(String.format(fmt, args));
  }

//  IMGUI_API void          TextV(const char* fmt, va_list args);
//  IMGUI_API void          TextColored(const ImVec4& col, const char* fmt, ...) IM_PRINTFARGS(2);  // shortcut for PushStyleColor(ImGuiCol_Text, col); Text(fmt, ...); PopStyleColor();
//  IMGUI_API void          TextColoredV(const ImVec4& col, const char* fmt, va_list args);
//  IMGUI_API void          TextDisabled(const char* fmt, ...) IM_PRINTFARGS(1);                    // shortcut for PushStyleColor(ImGuiCol_Text, style.Colors[ImGuiCol_TextDisabled]); Text(fmt, ...); PopStyleColor();
//  IMGUI_API void          TextDisabledV(const char* fmt, va_list args);
//  IMGUI_API void          TextWrapped(const char* fmt, ...) IM_PRINTFARGS(1);                     // shortcut for PushTextWrapPos(0.0f); Text(fmt, ...); PopTextWrapPos();. Note that this won't work on an auto-resizing window if there's no other widgets to extend the window width, yoy may need to set a size using SetNextWindowSize().
//  IMGUI_API void          TextWrappedV(const char* fmt, va_list args);
//  IMGUI_API void          TextUnformatted(const char* text, const char* text_end = NULL);         // doesn't require null terminated string if 'text_end' is specified. no copy done to any bounded stack buffer, recommended for long chunks of text
//  IMGUI_API void          LabelText(const char* label, const char* fmt, ...) IM_PRINTFARGS(2);    // display text+label aligned the same way as value+label widgets
//  IMGUI_API void          LabelTextV(const char* label, const char* fmt, va_list args);
//  IMGUI_API void          Bullet();                                                               // draw a small circle and keep the cursor on the same line. advance cursor x position by GetTreeNodeToLabelSpacing(), same distance that TreeNode() uses
//  IMGUI_API void          BulletText(const char* fmt, ...) IM_PRINTFARGS(1);                      // shortcut for Bullet()+Text()
//  IMGUI_API void          BulletTextV(const char* fmt, va_list args);
//  IMGUI_API bool          Button(const char* label, const ImVec2& size = ImVec2(0,0));            // button
//  IMGUI_API bool          SmallButton(const char* label);                                         // button with FramePadding=(0,0)
//  IMGUI_API bool          InvisibleButton(const char* str_id, const ImVec2& size);
//  IMGUI_API void          Image(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0,0), const ImVec2& uv1 = ImVec2(1,1), const ImVec4& tint_col = ImVec4(1,1,1,1), const ImVec4& border_col = ImVec4(0,0,0,0));
//  IMGUI_API bool          ImageButton(ImTextureID user_texture_id, const ImVec2& size, const ImVec2& uv0 = ImVec2(0,0),  const ImVec2& uv1 = ImVec2(1,1), int frame_padding = -1, const ImVec4& bg_col = ImVec4(0,0,0,0), const ImVec4& tint_col = ImVec4(1,1,1,1));    // <0 frame_padding uses default frame padding settings. 0 for no padding
//  IMGUI_API bool          Checkbox(const char* label, bool* v);
//  IMGUI_API bool          CheckboxFlags(const char* label, unsigned int* flags, unsigned int flags_value);
//  IMGUI_API bool          RadioButton(const char* label, bool active);
//  IMGUI_API bool          RadioButton(const char* label, int* v, int v_button);
//  IMGUI_API bool          Combo(const char* label, int* current_item, const char* const* items, int items_count, int height_in_items = -1);
//  IMGUI_API bool          Combo(const char* label, int* current_item, const char* items_separated_by_zeros, int height_in_items = -1);      // separate items with \0, end item-list with \0\0
//  IMGUI_API bool          Combo(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
//  IMGUI_API bool          ColorButton(const ImVec4& col, bool small_height = false, bool outline_border = true);
//  IMGUI_API bool          ColorEdit3(const char* label, float col[3]);                            // Hint: 'float col[3]' function argument is same as 'float* col'. You can pass address of first element out of a contiguous set, e.g. &myvector.x
//  IMGUI_API bool          ColorEdit4(const char* label, float col[4], bool show_alpha = true);    // "
//  IMGUI_API void          ColorEditMode(ImGuiColorEditMode mode);                                 // FIXME-OBSOLETE: This is inconsistent with most of the API and will be obsoleted/replaced.
//  IMGUI_API void          PlotLines(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0,0), int stride = sizeof(float));
//  IMGUI_API void          PlotLines(const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0,0));
//  IMGUI_API void          PlotHistogram(const char* label, const float* values, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0,0), int stride = sizeof(float));
//  IMGUI_API void          PlotHistogram(const char* label, float (*values_getter)(void* data, int idx), void* data, int values_count, int values_offset = 0, const char* overlay_text = NULL, float scale_min = FLT_MAX, float scale_max = FLT_MAX, ImVec2 graph_size = ImVec2(0,0));
//  IMGUI_API void          ProgressBar(float fraction, const ImVec2& size_arg = ImVec2(-1,0), const char* overlay = NULL);
//
//  // Widgets: Drags (tip: ctrl+click on a drag box to input with keyboard. manually input values aren't clamped, can go off-bounds)
//  // For all the Float2/Float3/Float4/Int2/Int3/Int4 versions of every functions, remember than a 'float v[3]' function argument is the same as 'float* v'. You can pass address of your first element out of a contiguous set, e.g. &myvector.x
//  IMGUI_API bool          DragFloat(const char* label, float* v, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);     // If v_min >= v_max we have no bound
//  IMGUI_API bool          DragFloat2(const char* label, float v[2], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          DragFloat3(const char* label, float v[3], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          DragFloat4(const char* label, float v[4], float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          DragFloatRange2(const char* label, float* v_current_min, float* v_current_max, float v_speed = 1.0f, float v_min = 0.0f, float v_max = 0.0f, const char* display_format = "%.3f", const char* display_format_max = NULL, float power = 1.0f);
//  IMGUI_API bool          DragInt(const char* label, int* v, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");                                       // If v_min >= v_max we have no bound
//  IMGUI_API bool          DragInt2(const char* label, int v[2], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
//  IMGUI_API bool          DragInt3(const char* label, int v[3], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
//  IMGUI_API bool          DragInt4(const char* label, int v[4], float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f");
//  IMGUI_API bool          DragIntRange2(const char* label, int* v_current_min, int* v_current_max, float v_speed = 1.0f, int v_min = 0, int v_max = 0, const char* display_format = "%.0f", const char* display_format_max = NULL);
//
//  // Widgets: Input with Keyboard
//  IMGUI_API bool          InputText(const char* label, char* buf, size_t buf_size, ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
//  IMGUI_API bool          InputTextMultiline(const char* label, char* buf, size_t buf_size, const ImVec2& size = ImVec2(0,0), ImGuiInputTextFlags flags = 0, ImGuiTextEditCallback callback = NULL, void* user_data = NULL);
//  IMGUI_API bool          InputFloat(const char* label, float* v, float step = 0.0f, float step_fast = 0.0f, int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputFloat2(const char* label, float v[2], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputFloat3(const char* label, float v[3], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputFloat4(const char* label, float v[4], int decimal_precision = -1, ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputInt(const char* label, int* v, int step = 1, int step_fast = 100, ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputInt2(const char* label, int v[2], ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputInt3(const char* label, int v[3], ImGuiInputTextFlags extra_flags = 0);
//  IMGUI_API bool          InputInt4(const char* label, int v[4], ImGuiInputTextFlags extra_flags = 0);
//
//  // Widgets: Sliders (tip: ctrl+click on a slider to input with keyboard. manually input values aren't clamped, can go off-bounds)
//  IMGUI_API bool          SliderFloat(const char* label, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);     // adjust display_format to decorate the value with a prefix or a suffix. Use power!=1.0 for logarithmic sliders
//  IMGUI_API bool          SliderFloat2(const char* label, float v[2], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          SliderFloat3(const char* label, float v[3], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          SliderFloat4(const char* label, float v[4], float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          SliderAngle(const char* label, float* v_rad, float v_degrees_min = -360.0f, float v_degrees_max = +360.0f);
//  IMGUI_API bool          SliderInt(const char* label, int* v, int v_min, int v_max, const char* display_format = "%.0f");
//  IMGUI_API bool          SliderInt2(const char* label, int v[2], int v_min, int v_max, const char* display_format = "%.0f");
//  IMGUI_API bool          SliderInt3(const char* label, int v[3], int v_min, int v_max, const char* display_format = "%.0f");
//  IMGUI_API bool          SliderInt4(const char* label, int v[4], int v_min, int v_max, const char* display_format = "%.0f");
//  IMGUI_API bool          VSliderFloat(const char* label, const ImVec2& size, float* v, float v_min, float v_max, const char* display_format = "%.3f", float power = 1.0f);
//  IMGUI_API bool          VSliderInt(const char* label, const ImVec2& size, int* v, int v_min, int v_max, const char* display_format = "%.0f");
//
//  // Widgets: Trees
//  IMGUI_API bool          TreeNode(const char* label);                                            // if returning 'true' the node is open and the tree id is pushed into the id stack. user is responsible for calling TreePop().
//  IMGUI_API bool          TreeNode(const char* str_id, const char* fmt, ...) IM_PRINTFARGS(2);    // read the FAQ about why and how to use ID. to align arbitrary text at the same level as a TreeNode() you can use Bullet().
//  IMGUI_API bool          TreeNode(const void* ptr_id, const char* fmt, ...) IM_PRINTFARGS(2);    // "
//  IMGUI_API bool          TreeNodeV(const char* str_id, const char* fmt, va_list args);           // "
//  IMGUI_API bool          TreeNodeV(const void* ptr_id, const char* fmt, va_list args);           // "
//  IMGUI_API bool          TreeNodeEx(const char* label, ImGuiTreeNodeFlags flags = 0);
//  IMGUI_API bool          TreeNodeEx(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) IM_PRINTFARGS(3);
//  IMGUI_API bool          TreeNodeEx(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, ...) IM_PRINTFARGS(3);
//  IMGUI_API bool          TreeNodeExV(const char* str_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args);
//  IMGUI_API bool          TreeNodeExV(const void* ptr_id, ImGuiTreeNodeFlags flags, const char* fmt, va_list args);
//  IMGUI_API void          TreePush(const char* str_id = NULL);                                    // ~ Indent()+PushId(). Already called by TreeNode() when returning true, but you can call Push/Pop yourself for layout purpose
//  IMGUI_API void          TreePush(const void* ptr_id = NULL);                                    // "
//  IMGUI_API void          TreePop();                                                              // ~ Unindent()+PopId()
//  IMGUI_API void          TreeAdvanceToLabelPos();                                                // advance cursor x position by GetTreeNodeToLabelSpacing()
//  IMGUI_API float         GetTreeNodeToLabelSpacing();                                            // horizontal distance preceding label when using TreeNode*() or Bullet() == (g.FontSize + style.FramePadding.x*2) for a regular unframed TreeNode
//  IMGUI_API void          SetNextTreeNodeOpen(bool is_open, ImGuiSetCond cond = 0);               // set next TreeNode/CollapsingHeader open state.
//  IMGUI_API bool          CollapsingHeader(const char* label, ImGuiTreeNodeFlags flags = 0);      // if returning 'true' the header is open. doesn't indent nor push on ID stack. user doesn't have to call TreePop().
//  IMGUI_API bool          CollapsingHeader(const char* label, bool* p_open, ImGuiTreeNodeFlags flags = 0); // when 'p_open' isn't NULL, display an additional small close button on upper right of the header
//
//  // Widgets: Selectable / Lists
//  IMGUI_API bool          Selectable(const char* label, bool selected = false, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0,0));  // size.x==0.0: use remaining width, size.x>0.0: specify width. size.y==0.0: use label height, size.y>0.0: specify height
//  IMGUI_API bool          Selectable(const char* label, bool* p_selected, ImGuiSelectableFlags flags = 0, const ImVec2& size = ImVec2(0,0));
//  IMGUI_API bool          ListBox(const char* label, int* current_item, const char* const* items, int items_count, int height_in_items = -1);
//  IMGUI_API bool          ListBox(const char* label, int* current_item, bool (*items_getter)(void* data, int idx, const char** out_text), void* data, int items_count, int height_in_items = -1);
//  IMGUI_API bool          ListBoxHeader(const char* label, const ImVec2& size = ImVec2(0,0)); // use if you want to reimplement ListBox() will custom data or interactions. make sure to call ListBoxFooter() afterwards.
//  IMGUI_API bool          ListBoxHeader(const char* label, int items_count, int height_in_items = -1); // "
//  IMGUI_API void          ListBoxFooter();                                                    // terminate the scrolling region
//
//  // Widgets: Value() Helpers. Output single value in "name: value" format (tip: freely declare more in your code to handle your types. you can add functions to the ImGui namespace)
//  IMGUI_API void          Value(const char* prefix, bool b);
//  IMGUI_API void          Value(const char* prefix, int v);
//  IMGUI_API void          Value(const char* prefix, unsigned int v);
//  IMGUI_API void          Value(const char* prefix, float v, const char* float_format = NULL);
//  IMGUI_API void          ValueColor(const char* prefix, const ImVec4& v);
//  IMGUI_API void          ValueColor(const char* prefix, ImU32 v);
//
//  // Tooltips
//  IMGUI_API void          SetTooltip(const char* fmt, ...) IM_PRINTFARGS(1);                  // set tooltip under mouse-cursor, typically use with ImGui::IsHovered(). last call wins
//  IMGUI_API void          SetTooltipV(const char* fmt, va_list args);
//  IMGUI_API void          BeginTooltip();                                                     // use to create full-featured tooltip windows that aren't just text
//  IMGUI_API void          EndTooltip();
//
//  // Menus
//  IMGUI_API bool          BeginMainMenuBar();                                                 // create and append to a full screen menu-bar. only call EndMainMenuBar() if this returns true!
//  IMGUI_API void          EndMainMenuBar();
//  IMGUI_API bool          BeginMenuBar();                                                     // append to menu-bar of current window (requires ImGuiWindowFlags_MenuBar flag set). only call EndMenuBar() if this returns true!
//  IMGUI_API void          EndMenuBar();
//  IMGUI_API bool          BeginMenu(const char* label, bool enabled = true);                  // create a sub-menu entry. only call EndMenu() if this returns true!
//  IMGUI_API void          EndMenu();
//  IMGUI_API bool          MenuItem(const char* label, const char* shortcut = NULL, bool selected = false, bool enabled = true);  // return true when activated. shortcuts are displayed for convenience but not processed by ImGui at the moment
//  IMGUI_API bool          MenuItem(const char* label, const char* shortcut, bool* p_selected, bool enabled = true);              // return true when activated + toggle (*p_selected) if p_selected != NULL
//
//  // Popups
//  IMGUI_API void          OpenPopup(const char* str_id);                                      // mark popup as open. popups are closed when user click outside, or activate a pressable item, or CloseCurrentPopup() is called within a BeginPopup()/EndPopup() block. popup identifiers are relative to the current ID-stack (so OpenPopup and BeginPopup needs to be at the same level).
//  IMGUI_API bool          BeginPopup(const char* str_id);                                     // return true if the popup is open, and you can start outputting to it. only call EndPopup() if BeginPopup() returned true!
//  IMGUI_API bool          BeginPopupModal(const char* name, bool* p_open = NULL, ImGuiWindowFlags extra_flags = 0);               // modal dialog (block interactions behind the modal window, can't close the modal window by clicking outside)
//  IMGUI_API bool          BeginPopupContextItem(const char* str_id, int mouse_button = 1);                                        // helper to open and begin popup when clicked on last item. read comments in .cpp!
//  IMGUI_API bool          BeginPopupContextWindow(bool also_over_items = true, const char* str_id = NULL, int mouse_button = 1);  // helper to open and begin popup when clicked on current window.
//  IMGUI_API bool          BeginPopupContextVoid(const char* str_id = NULL, int mouse_button = 1);                                 // helper to open and begin popup when clicked in void (no window).
//  IMGUI_API void          EndPopup();
//  IMGUI_API void          CloseCurrentPopup();                                                // close the popup we have begin-ed into. clicking on a MenuItem or Selectable automatically close the current popup.
//
//  // Logging: all text output from interface is redirected to tty/file/clipboard. By default, tree nodes are automatically opened during logging.
//  IMGUI_API void          LogToTTY(int max_depth = -1);                                       // start logging to tty
//  IMGUI_API void          LogToFile(int max_depth = -1, const char* filename = NULL);         // start logging to file
//  IMGUI_API void          LogToClipboard(int max_depth = -1);                                 // start logging to OS clipboard
//  IMGUI_API void          LogFinish();                                                        // stop logging (close file, etc.)
//  IMGUI_API void          LogButtons();                                                       // helper to display buttons for logging to tty/file/clipboard
//  IMGUI_API void          LogText(const char* fmt, ...) IM_PRINTFARGS(1);                     // pass text data straight to log (without being displayed)
//
//  // Clipping
//  IMGUI_API void          PushClipRect(const ImVec2& clip_rect_min, const ImVec2& clip_rect_max, bool intersect_with_current_clip_rect);
//  IMGUI_API void          PopClipRect();
//
//  // Utilities
//  IMGUI_API bool          IsItemHovered();                                                    // was the last item hovered by mouse?
//  IMGUI_API bool          IsItemHoveredRect();                                                // was the last item hovered by mouse? even if another item is active or window is blocked by popup while we are hovering this
//  IMGUI_API bool          IsItemActive();                                                     // was the last item active? (e.g. button being held, text field being edited- items that don't interact will always return false)
//  IMGUI_API bool          IsItemClicked(int mouse_button = 0);                                // was the last item clicked? (e.g. button/node just clicked on)
//  IMGUI_API bool          IsItemVisible();                                                    // was the last item visible? (aka not out of sight due to clipping/scrolling.)
//  IMGUI_API bool          IsAnyItemHovered();
//  IMGUI_API bool          IsAnyItemActive();
//  IMGUI_API ImVec2        GetItemRectMin();                                                   // get bounding rect of last item in screen space
//  IMGUI_API ImVec2        GetItemRectMax();                                                   // "
//  IMGUI_API ImVec2        GetItemRectSize();                                                  // "
//  IMGUI_API void          SetItemAllowOverlap();                                              // allow last item to be overlapped by a subsequent item. sometimes useful with invisible buttons, selectables, etc. to catch unused area.
//  IMGUI_API bool          IsWindowHovered();                                                  // is current window hovered and hoverable (not blocked by a popup) (differentiate child windows from each others)
//  IMGUI_API bool          IsWindowFocused();                                                  // is current window focused
//  IMGUI_API bool          IsRootWindowFocused();                                              // is current root window focused (root = top-most parent of a child, otherwise self)
//  IMGUI_API bool          IsRootWindowOrAnyChildFocused();                                    // is current root window or any of its child (including current window) focused
//  IMGUI_API bool          IsRootWindowOrAnyChildHovered();                                    // is current root window or any of its child (including current window) hovered and hoverable (not blocked by a popup)
//  IMGUI_API bool          IsRectVisible(const ImVec2& size);                                  // test if rectangle (of given size, starting from cursor position) is visible / not clipped.
//  IMGUI_API bool          IsRectVisible(const ImVec2& rect_min, const ImVec2& rect_max);      // test if rectangle (in screen space) is visible / not clipped. to perform coarse clipping on user's side.
//  IMGUI_API bool          IsPosHoveringAnyWindow(const ImVec2& pos);                          // is given position hovering any active imgui window
//  IMGUI_API float         GetTime();
//  IMGUI_API int           GetFrameCount();
//  IMGUI_API const char*   GetStyleColName(ImGuiCol idx);
//  IMGUI_API ImVec2        CalcItemRectClosestPoint(const ImVec2& pos, bool on_edge = false, float outward = +0.0f);   // utility to find the closest point the last item bounding rectangle edge. useful to visually link items
//  IMGUI_API ImVec2        CalcTextSize(const char* text, const char* text_end = NULL, bool hide_text_after_double_hash = false, float wrap_width = -1.0f);
//  IMGUI_API void          CalcListClipping(int items_count, float items_height, int* out_items_display_start, int* out_items_display_end);    // calculate coarse clipping for large list of evenly sized items. Prefer using the ImGuiListClipper higher-level helper if you can.
//
//  IMGUI_API bool          BeginChildFrame(ImGuiID id, const ImVec2& size, ImGuiWindowFlags extra_flags = 0);	// helper to create a child window / scrolling region that looks like a normal widget frame
//  IMGUI_API void          EndChildFrame();
//
//  IMGUI_API ImVec4        ColorConvertU32ToFloat4(ImU32 in);
//  IMGUI_API ImU32         ColorConvertFloat4ToU32(const ImVec4& in);
//  IMGUI_API void          ColorConvertRGBtoHSV(float r, float g, float b, float& out_h, float& out_s, float& out_v);
//  IMGUI_API void          ColorConvertHSVtoRGB(float h, float s, float v, float& out_r, float& out_g, float& out_b);
//
//  // Inputs
//  IMGUI_API int           GetKeyIndex(ImGuiKey key);                                          // map ImGuiKey_* values into user's key index. == io.KeyMap[key]
//  IMGUI_API bool          IsKeyDown(int key_index);                                           // key_index into the keys_down[] array, imgui doesn't know the semantic of each entry, uses your own indices!
//  IMGUI_API bool          IsKeyPressed(int key_index, bool repeat = true);                    // uses user's key indices as stored in the keys_down[] array. if repeat=true. uses io.KeyRepeatDelay / KeyRepeatRate
//  IMGUI_API bool          IsKeyReleased(int key_index);                                       // "
//  IMGUI_API bool          IsMouseDown(int button);                                            // is mouse button held
//  IMGUI_API bool          IsMouseClicked(int button, bool repeat = false);                    // did mouse button clicked (went from !Down to Down)
//  IMGUI_API bool          IsMouseDoubleClicked(int button);                                   // did mouse button double-clicked. a double-click returns false in IsMouseClicked(). uses io.MouseDoubleClickTime.
//  IMGUI_API bool          IsMouseReleased(int button);                                        // did mouse button released (went from Down to !Down)
//  IMGUI_API bool          IsMouseHoveringWindow();                                            // is mouse hovering current window ("window" in API names always refer to current window). disregarding of any consideration of being blocked by a popup. (unlike IsWindowHovered() this will return true even if the window is blocked because of a popup)
//  IMGUI_API bool          IsMouseHoveringAnyWindow();                                         // is mouse hovering any visible window
//  IMGUI_API bool          IsMouseHoveringRect(const ImVec2& r_min, const ImVec2& r_max, bool clip = true);  // is mouse hovering given bounding rect (in screen space). clipped by current clipping settings. disregarding of consideration of focus/window ordering/blocked by a popup.
//  IMGUI_API bool          IsMouseDragging(int button = 0, float lock_threshold = -1.0f);      // is mouse dragging. if lock_threshold < -1.0f uses io.MouseDraggingThreshold
//  IMGUI_API ImVec2        GetMousePos();                                                      // shortcut to ImGui::GetIO().MousePos provided by user, to be consistent with other calls
//  IMGUI_API ImVec2        GetMousePosOnOpeningCurrentPopup();                                 // retrieve backup of mouse positioning at the time of opening popup we have BeginPopup() into
//  IMGUI_API ImVec2        GetMouseDragDelta(int button = 0, float lock_threshold = -1.0f);    // dragging amount since clicking. if lock_threshold < -1.0f uses io.MouseDraggingThreshold
//  IMGUI_API void          ResetMouseDragDelta(int button = 0);                                //
//  IMGUI_API ImGuiMouseCursor GetMouseCursor();                                                // get desired cursor type, reset in ImGui::NewFrame(), this updated during the frame. valid before Render(). If you use software rendering by setting io.MouseDrawCursor ImGui will render those for you
//  IMGUI_API void          SetMouseCursor(ImGuiMouseCursor type);                              // set desired cursor type
//  IMGUI_API void          CaptureKeyboardFromApp(bool capture = true);                        // manually override io.WantCaptureKeyboard flag next frame (said flag is entirely left for your application handle). e.g. force capture keyboard when your widget is being hovered.
//  IMGUI_API void          CaptureMouseFromApp(bool capture = true);                           // manually override io.WantCaptureMouse flag next frame (said flag is entirely left for your application handle).
//
//  // Helpers functions to access functions pointers in ImGui::GetIO()
//  IMGUI_API void*         MemAlloc(size_t sz);
//  IMGUI_API void          MemFree(void* ptr);
//  IMGUI_API const char*   GetClipboardText();
//  IMGUI_API void          SetClipboardText(const char* text);
//
//  // Internal context access - if you want to use multiple context, share context between modules (e.g. DLL). There is a default context created and active by default.
//  // All contexts share a same ImFontAtlas by default. If you want different font atlas, you can new() them and overwrite the GetIO().Fonts variable of an ImGui context.
  public static native String getVersion(); /*
    return env->NewStringUTF(ImGui::GetVersion());
  */
//  IMGUI_API const char*   GetVersion();
//  IMGUI_API ImGuiContext* CreateContext(void* (*malloc_fn)(size_t) = NULL, void (*free_fn)(void*) = NULL);
//  IMGUI_API void          DestroyContext(ImGuiContext* ctx);
//  IMGUI_API ImGuiContext* GetCurrentContext();
//  IMGUI_API void          SetCurrentContext(ImGuiContext* ctx);


  private static native boolean beginJni(String name, int flags); /*
		return ImGui::Begin(name, NULL, flags);
	*/

  // TODO: optimize without BeginWindowJniResult
  private static native BeginWindowJniResult beginJni(String name, boolean initialOpenValue, int flags); /*
		bool open = initialOpenValue;
		bool collapsed = ImGui::Begin(name, &open);

		jclass resultCls = env->FindClass("com/borschlab/gdx/imgui/ImGui$BeginWindowJniResult");
	 	assert(resultCls != NULL);

		jmethodID ctor = env->GetMethodID(resultCls, "<init>", "(ZZ)V");
		assert(ctor != NULL);

		return env->NewObject(resultCls, ctor, collapsed, open);
	*/

  private static class BeginWindowJniResult {
    public final boolean isCollapsed;
    public final boolean isOpen;

    public BeginWindowJniResult(boolean isCollapsed, boolean isOpen) {
      this.isCollapsed = isCollapsed;
      this.isOpen = isOpen;
    }
  }
}
