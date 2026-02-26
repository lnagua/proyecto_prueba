//
// Created by vboxuser on 6/2/26.
//
#include "point.h"
#include <iostream>


int Point::getX() {
    return _x;
}

int Point::getY() {
    return _y;
}

void Point::set(int x, int y) {
    _x = x;
    _y = y;
}

void Point::display() {
    std::cout << "Point(" << _x << ", " << _y << ")" << std::endl;
}