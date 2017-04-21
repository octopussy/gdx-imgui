package com.github.octopussy.test;

import com.badlogic.gdx.backends.lwjgl.LwjglApplication;
import com.badlogic.gdx.backends.lwjgl.LwjglApplicationConfiguration;
import com.badlogic.gdx.jnigen.JniGenSharedLibraryLoader;
import com.badlogic.gdx.utils.SharedLibraryLoader;

/**
 * @author octopussy
 */
public class Launcher {

  public static void main(String[] args) {
    new JniGenSharedLibraryLoader("lib/libs/gdx-imgui-natives.jar").load("gdx-imgui");

    LwjglApplicationConfiguration cfg = new LwjglApplicationConfiguration();
    cfg.width = 1024;
    cfg.height = 768;
    cfg.title = "Dear Gdx ImGui";

    LwjglApplication app = new LwjglApplication(new WindowDemo(), cfg);
  }
}
