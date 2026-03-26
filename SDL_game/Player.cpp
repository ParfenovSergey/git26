#include "Player.hpp"

void Player::load(std::string tag, float x, float y, float w, float h) {
  GameObject::load(tag, x, y, w, h);
}

void Player::draw(SDL_Renderer* renderer) { GameObject::draw(renderer); }

void Player::update() {
  GameObject::update();
  x_ += (5 * dir);
  dir *= -1;
}

void Player::clean() {
  GameObject::clean();
  std::cout << "Player cleaned" << std::endl;
}
