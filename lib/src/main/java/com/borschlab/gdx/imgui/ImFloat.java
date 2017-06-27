package com.borschlab.gdx.imgui;

/**
 * @author octopussy
 */
public class ImFloat {
  public float value;

  public float get() {
    return value;
  }

  public void set(float v) {
    value = v;
  }

  private ImFloat(float initial) {
    value = initial;
  }

  public static ImFloat from(float v) {
    return new ImFloat(v);
  }
}
