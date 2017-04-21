package com.github.octopussy.test;

import com.borschlab.gdx.imgui.ImGui;

/**
 * @author mcpussy
 * @date 21/04/2017
 */
public class Demo01 extends ImDemoApp {

  @Override
  public void renderGui() {
    ImGui.showUserGuide();
    ImGui.showTestWindow();
  }
}
