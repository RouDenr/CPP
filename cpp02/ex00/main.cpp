// Created by Dennet Cordelia on 03.08.2022.

#include <iostream>
#include "Fixed.h"

int main(void ) {
    Fixed a;
    Fixed b(a);
    Fixed c;

    c = b;

    std::cout << a.getRawBite() << std::endl;
    std::cout << b.getRawBite() << std::endl;
    std::cout << c.getRawBite() << std::endl;
    return (0);
}