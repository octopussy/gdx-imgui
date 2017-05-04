package com.borschlab.gdx.imgui;

/**
 * @author octopussy
 */
public final class ImBool {
  public boolean value;

  private ImBool(boolean initial) {
    value = initial;
  }

  public boolean isSet() { return value; }

  public void set(boolean value) { this.value = value; }

  public static ImBool from(boolean value) {
    return new ImBool(value);
  }
}
