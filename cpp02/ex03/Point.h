// Copyright by decordel $name 2022

#pragma once
#ifndef __POINT__
# define __POINT__
# include "Fixed.h"

class Point {
 public:
    Point(void );
    Point(const Fixed, const Fixed);
    Point(const Point&);
    ~Point(void);

    Point&  operator=(const Point&);

    Fixed   getX(void) const;
    Fixed   getY(void) const;

    static Fixed    vectorProduct(Point a, Point b, Point c);

 private:
    Fixed _x;
    Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif //__POINT__
