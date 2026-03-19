#include "Game.hpp"

#include <iostream>

int main(int argv, char** argc) {
  Game g;
  if (g.init("TEST WINDOW", 640, 480,
             SDL_WINDOW_RESIZABLE | SDL_WINDOW_MINIMIZED)) {
    g.startGame();
  } else {
    return 1;
  }

  while (g.isRunning()) {
    g.handleEvents();
    g.update();
    g.render();
  }
  g.clean();
  return 0;
}

bool Game::init(std::string title, int w, int h, int flags) {
  window_ = SDL_CreateWindow(title.c_str(), w, h, flags);
  if (window_ != 0) {
    std::cout << "window created" << std::endl;
    renderer_ = SDL_CreateRenderer(window_, NULL);
    if (renderer_ != 0) {
      std::cout << "renderer created" << std::endl;
      SDL_SetRenderDrawColor(renderer_, 255, 0, 0, 255);
    } else {
      std::cerr << "renderer error" << std::endl;
      return false;
    }
  } else {
    std::cerr << "window error" << std::endl;
    return false;
  }
  return true;
}

void Game::render() {
  SDL_RenderClear(renderer_);
  SDL_RenderPresent(renderer_);
}

void Game::update() {}

void Game::handleEvents() {
  SDL_Event event;
  if (SDL_PollEvent(&event)) {
    switch (event.type) {
      case SDL_EVENT_QUIT:
        stopGame();
        break;
      case SDL_EVENT_WINDOW_RESIZED:
        std::cout << "resize" << std::endl;
        break;
      default:
        break;
    }
  }
}

void Game::clean() {
  std::cout << "exit" << std::endl;
  SDL_DestroyRenderer(renderer_);
  SDL_DestroyWindow(window_);
  SDL_Quit();
}