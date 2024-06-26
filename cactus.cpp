#include "cactus.hpp"
#include "game.hpp"

const int Cactus::HEIGHT = 292;
const int Cactus::WIDTH = 48;

Cactus::Cactus(int x, int gap, ALLEGRO_BITMAP **bitmap) {
    this->x = x;
    this->gap = gap;
    this->randomTop();
    this->bitmap = bitmap;
}

int Cactus::getX() {
    return x;
}

int Cactus::getTop() {
    return top;
}

int Cactus::getGap() {
    return gap;
}

int Cactus::getBottom() {
    return top + gap;
}

void Cactus::randomTop() {
    this->top = (SCREEN_HEIGHT - GRASS_HEIGHT - gap) / 2 + rand() % 100 + 1 - 50;
}

void Cactus::draw(int offset) {
    al_draw_bitmap(bitmap[1], x + offset, top - Cactus::HEIGHT, 0);
    al_draw_bitmap(bitmap[0], x + offset, top + gap, 0);
}
