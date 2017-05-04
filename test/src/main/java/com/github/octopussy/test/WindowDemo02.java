package com.github.octopussy.test;

import com.borschlab.gdx.imgui.ImBool;
import com.borschlab.gdx.imgui.ImGui;
import com.borschlab.gdx.imgui.ImGuiSetCond;
import com.borschlab.gdx.imgui.ImGuiWindowFlags;

/**
 * @author octopussy
 */
public class WindowDemo02 extends ImDemoApp {

  private ImBool isClosableWindowOpen = ImBool.from(true);

  @Override
  public void renderGui() {

    ImGui.setNextWindowPos(10, 10, ImGuiSetCond.Always);
    ImGui.setNextWindowSize(100, 100, ImGuiSetCond.Once);
    ImGui.begin("Main", ImGuiWindowFlags.NoCollapse | ImGuiWindowFlags.ShowBorders);

    //Gdx.app.log("log", ImGui.getWindowContentRegionMin().toString());
    //Gdx.app.log("log", ImGui.getWindowSize().toString());
    //Gdx.app.log("log", String.valueOf(ImGui.isWindowCollapsed()));

    ImGui.end();

    if (isClosableWindowOpen.value) {
      ImGui.setNextWindowPos(110, 10, ImGuiSetCond.Once);
      ImGui.setNextWindowSize(400, 400, ImGuiSetCond.Once);
      ImGui.begin("Closable", isClosableWindowOpen);
      ImGui.setWindowFontScale(1.5f);
      ImGui.beginChild("sub", 200, 200, true, 0);
      ImGui.endChild();
      ImGui.end();
    } else {
      ImGui.setWindowSize("Main", 200, 200);
    }
  }
}
