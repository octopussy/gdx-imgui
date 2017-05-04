import com.badlogic.gdx.jnigen.AntScriptGenerator;
import com.badlogic.gdx.jnigen.BuildConfig;
import com.badlogic.gdx.jnigen.BuildTarget;
import com.badlogic.gdx.jnigen.BuildTarget.TargetOs;
import com.badlogic.gdx.jnigen.NativeCodeGenerator;

import java.io.File;

public class _generate {
  public static void main(String[] args) throws Exception {

    String[] cppIncludes = {
      "imgui/imgui.cpp",
      "imgui/imgui_draw.cpp",
      "imgui/imgui_demo.cpp",
      "com.borschlab.gdx.imgui.ImGui.cpp"
    };

    String[] headers = {"imgui/"};

    BuildTarget win32 = BuildTarget.newDefaultTarget(TargetOs.Windows, false);
    win32.cIncludes = win32.cppIncludes = cppIncludes;
    win32.headerDirs = headers;

    BuildTarget win64 = BuildTarget.newDefaultTarget(TargetOs.Windows, true);
    win64.cIncludes = win64.cppIncludes = cppIncludes;
    win64.headerDirs = headers;

    BuildTarget lin32 = BuildTarget.newDefaultTarget(TargetOs.Linux, false);
    lin32.cIncludes = lin32.cppIncludes = cppIncludes;
    lin32.headerDirs = headers;

    BuildTarget lin64 = BuildTarget.newDefaultTarget(TargetOs.Linux, true);
    lin64.cIncludes = lin64.cppIncludes = cppIncludes;
    lin64.headerDirs = headers;

    BuildTarget android = BuildTarget.newDefaultTarget(TargetOs.Android, false);
    android.cIncludes = android.cppIncludes = cppIncludes;
    android.headerDirs = headers;

    BuildTarget mac32 = BuildTarget.newDefaultTarget(TargetOs.MacOsX, false);
    mac32.cIncludes = mac32.cppIncludes = cppIncludes;
    mac32.headerDirs = headers;

    BuildTarget mac64 = BuildTarget.newDefaultTarget(TargetOs.MacOsX, true);
    mac64.cIncludes = mac64.cppIncludes = cppIncludes;
    mac64.headerDirs = headers;

    String gdxClassPath = "/Users/mcpussy/.gradle/caches/modules-2/files-2.1/com.badlogicgames.gdx/gdx/1.9.6/47d1e9b890e364ec28f128e9bb3b9a12a94c164/gdx-1.9.6.jar";

    BuildTarget ios = BuildTarget.newDefaultTarget(TargetOs.IOS, false);
    new NativeCodeGenerator().generate("src/main/java/",
      "build/classes/main" + File.pathSeparator +
        gdxClassPath + File.pathSeparator, "jni");
    new AntScriptGenerator().generate(new BuildConfig("gdx-imgui"),
      win32, win64, lin32, lin64, mac32, mac64, android, ios);
  }
}