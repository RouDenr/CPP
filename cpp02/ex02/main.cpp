// Copyright by decordel $name 2022

// Created by Dennet Cordelia on 03.08.2022.

#include <iostream>
#include "Fixed.h"

int main(void ) {
    Fixed a;
    Fixed b(Fixed(5.05f) * Fixed(2));

    std::cout << "a is " << a << std::endl;
    std::cout << "pre-increment a is " << ++a << std::endl;
    std::cout << "now a is " << a << std::endl;
    std::cout << "post-increment a is " << a++ << std::endl;
    std::cout << "now a is " << a << std::endl;

    std::cout << "b is " << b.toFloat() << std::endl;

    std::cout << "max(a, b) is " << Fixed::max(a, b) << std::endl;
    return (0);
}