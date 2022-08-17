// Copyright by decordel 2022

#include "Base.h"
#include <ctime>
#include <cstdlib>
//#include <typeinfo>
#include <iostream>

int main(void) {
    srand(time(NULL));

    Base *base = generate();
    identify(base);
    identify(*base);
//    std::cout << "It's " << typeid(*base).name() << " class" << std::endl;
    delete base;
    return 0;
}