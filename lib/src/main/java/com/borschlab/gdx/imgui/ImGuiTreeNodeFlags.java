package com.borschlab.gdx.imgui;

/**
 * @author octopussy
 */
public class ImGuiTreeNodeFlags {
  public static final int Selected             = 1 << 0;   // Draw as selected
  public static final int Framed               = 1 << 1;   // Full colored frame (e.g. for CollapsingHeader)
  public static final int AllowOverlapMode     = 1 << 2;   // Hit testing to allow subsequent widgets to overlap this one
  public static final int NoTreePushOnOpen     = 1 << 3;   // Don't do a TreePush() when open (e.g. for CollapsingHeader) = no extra indent nor pushing on ID stack
  public static final int NoAutoOpenOnLog      = 1 << 4;   // Don't automatically and temporarily open node when Logging is active (by default logging will automatically open tree nodes)
  public static final int DefaultOpen          = 1 << 5;   // Default node to be open
  public static final int OpenOnDoubleClick    = 1 << 6;   // Need double-click to open node
  public static final int OpenOnArrow          = 1 << 7;   // Only open when clicking on the arrow part. If OpenOnDoubleClick is also set, single-click arrow or double-click all box to open.
  public static final int Leaf                 = 1 << 8;   // No collapsing, no arrow (use as a convenience for leaf nodes).
  public static final int Bullet               = 1 << 9;   // Display a bullet instead of arrow

  // from original code
  //SpanAllAvailWidth  = 1 << 10,  // FIXME: TODO: Extend hit box horizontally even if not framed
  //NoScrollOnOpen     = 1 << 11,  // FIXME: TODO: Disable automatic scroll on TreePop() if node got just open and contents is not visible
  public static final int CollapsingHeader     = Framed | NoAutoOpenOnLog;
}
