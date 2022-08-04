// Copyright by decordel $name 2022

#include "Point.h"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    if (Point::vectorProduct(a, b, point) > 0 &&
        Point::vectorProduct(b, c, point) > 0 &&
        Point::vectorProduct(c, a, point) > 0)
        return true;
    if (Point::vectorProduct(a, b, point) < 0 &&
        Point::vectorProduct(b, c, point) < 0 &&
        Point::vectorProduct(c, a, point) < 0)
        return true;
    return false;
}


