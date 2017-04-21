package com.github.octopussy.test;

import com.badlogic.gdx.ApplicationListener;
import com.badlogic.gdx.Gdx;
import com.badlogic.gdx.InputAdapter;
import com.badlogic.gdx.InputMultiplexer;
import com.borschlab.gdx.imgui.ImStage;

/**
 * @author octopussy
 */
abstract public class ImDemoApp implements ApplicationListener {

  InputAdapter stage = new InputAdapter() {
    @Override
    public boolean touchDown(int screenX, int screenY, int pointer, int button) {
      Gdx.app.log("back input", "touchDown");
      return super.touchDown(screenX, screenY, pointer, button);
    }
  };

  ImStage imStage;

  @Override
  public void create() {
    imStage = new ImStage();

    Gdx.input.setInputProcessor(new InputMultiplexer(imStage, stage));
  }

  @Override
  public void resize(int width, int height) {
    imStage.resize(width, height);
  }

  @Override
  public void render() {
    float deltaTime = Gdx.graphics.getDeltaTime();

    //stage.act(deltaTime);

    imStage.act(deltaTime, new Runnable() {
      @Override
      public void run() {
        renderGui();
      }
    });

    imStage.draw();
  }

  @Override
  public void pause() {

  }

  @Override
  public void resume() {

  }

  @Override
  public void dispose() {

  }

  public abstract void renderGui();
}
