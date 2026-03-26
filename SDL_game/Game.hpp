#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

#include <string>

SDL_Window* g_pWindow = nullptr;
SDL_Renderer* g_pRenderer = nullptr;

class Game {
 public:
  Game() {}
  ~Game() {}
  bool init(std::string, int, int, int);
  void render();
  void update();
  void handleEvents();
  void clean();
  void startGame() { running_ = true; }
  void stopGame() { running_ = false; }
  bool isRunning() { return running_; }

 private:
  bool running_ = false;
  SDL_Window* window_ = nullptr;
  SDL_Renderer* renderer_ = nullptr;
  int currentFrame_;
};