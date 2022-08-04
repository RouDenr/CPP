// Copyright by decordel $name 2022

#include <iostream>
#include "Point.h"

int main(void ) {
    Point   a(7, 5);
    Point   b(11, 1.5f);
    Point   c(2, 2.75f);
    Point   point_in(7, 3);
    Point   point_out(7, 6);

    if (bsp(a, b, c, point_in))
        std::cout << "Point_in - is in! ٩(๏_๏)۶" << std::endl;
    else
        std::cout << "Point_in - is out! щ（ﾟД ﾟщ）" << std::endl;

    if (bsp(a, b, c, point_out))
        std::cout << "Point_out - is in! щ（ﾟД ﾟщ）" << std::endl;
    else
        std::cout << "Point_out - is out! ٩(๏_๏)۶" << std::endl;

    return (0);
}