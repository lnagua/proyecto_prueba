//
// Created by vboxuser on 6/2/26.
//

#ifndef PRACTICA_2_V2_POINT_H
#define PRACTICA_2_V2_POINT_H

class Point {


public:
    // Constructor
    Point() : _x(0), _y(0) {}  // Constructor por defecto que inicializa a (0, 0)

    // Getters
    int getX();
    int getY();
    void set(int x, int y);
    void display();

private:
    int _x;
    int _y;
};

#endif //PRACTICA_2_V2_POINT_H