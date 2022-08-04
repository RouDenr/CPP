// Copyright by decordel $name 2022

#include "Point.h"

Point::Point() {
    this->_x = 0;
    this->_y = 0;
}
Point::Point(Fixed x, Fixed y) {
    this->_x = x;
    this->_y = y;
}
Point::Point(const Point& orig) {
    this->_x = orig.getX();
    this->_y = orig.getY();
}

Point &Point::operator=(const Point &orig) {
    this->_x = orig.getX();
    this->_y = orig.getY();
    return *this;
}

Fixed Point::getX() const {
    return this->_x;
}
Fixed Point::getY() const {
    return this->_y;
}

Fixed Point::vectorProduct(Point a, Point b, Point c) {
    return (a.getX() - c.getX()) * (b.getY() - a.getY()) -
           (b.getX() - a.getX()) * (a.getY() - c.getY());
}


Point::~Point() {
}

