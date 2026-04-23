#pragma once

#include "GameObject.hpp"
/**
 * @brief Класс игрока
 *
 * ПРИМЕР ПОЛНОГО ОПИСАНИЯ КЛАССА
 *
 * ПРИМЕР 2
 * @version 0.1
 * @pre description of the precondition
 * @post description of the postcondition
 * @author ParfenovSA
 * @date 23.04.2026 правка 1
 * @date 24.04.2026 правка 2
 * @attention attention text
 * @bug bug description
 * @note note text
 * @todo paragraph describing what is to be done
 * @warning warning message
 *
 */
class Player : public GameObject {
 public:
  /**
   * @brief Метод загрузки текстуры
   *
   * Загружается текстура по тегу tag
   *
   * @param[in] tag тег текстуры
   * @param x координата x
   * @return Не возвращает ничего
   *
   */
  void load(std::string tag, float x, float y, float w, float h);
  void draw(SDL_Renderer* renderer);
  void update();
  void clean();
};