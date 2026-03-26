#pragma once 
#include <iostream>
#include <SDL3/SDL.h>

class GameObject{
 protected:
  std::string texture_tag;
  int currentFrame_;
  int curentRow_;
  float x_, y_;
  float w_, h_;
 public:
  void load(std::string tag, float x, float y, float w, float h);
  void draw(SDL_Renderer* renderer);
  void update();
  void clean();
};
