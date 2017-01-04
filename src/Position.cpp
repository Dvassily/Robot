#include "Position.h"

Position::Position()
{ }

Position::Position(int x, int y)
    : x(x), y(y)
{ }

void Position::setx(int x) {
    this->x = x;
}

void Position::sety(int y) {
    this->y = y;
}

int Position::getx() const {
    return x;
}

int Position::gety() const{
    return y;
}
