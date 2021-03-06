package com.borschlab.gdx.imgui;

/**
 * @author mcpussy
 */

/*
struct ImDrawCmd
{
    unsigned int    ElemCount;              // Number of indices (multiple of 3) to be rendered as triangles. Vertices are stored in the callee ImDrawList's vtx_buffer[] array, indices in idx_buffer[].
    ImVec4          ClipRect;               // Clipping rectangle (x1, y1, x2, y2)
    ImTextureID     TextureId;              // User-provided texture ID. Set by user in ImfontAtlas::SetTexID() for fonts or passed to Image*() functions. Ignore if never using images or multiple fonts atlas.
    ImDrawCallback  UserCallback;           // If != NULL, call the function instead of rendering the vertices. clip_rect and texture_id will be set normally.
    void*           UserCallbackData;       // The draw callback code can access this.

    ImDrawCmd() { ElemCount = 0; ClipRect.x = ClipRect.y = -8192.0f; ClipRect.z = ClipRect.w = +8192.0f; TextureId = NULL; UserCallback = NULL; UserCallbackData = NULL; }
}
 */

public class ImGuiDrawCmd {
  public final int elemCount;
  public final float clipRectX;
  public final float clipRectY;
  public final float clipRectW;
  public final float clipRectH;

  public ImGuiDrawCmd(int elemCount, float clipRectX, float clipRectY, float clipRectW, float clipRectH) {
    this.elemCount = elemCount;
    this.clipRectX = clipRectX;
    this.clipRectY = clipRectY;
    this.clipRectW = clipRectW;
    this.clipRectH = clipRectH;
  }
}
