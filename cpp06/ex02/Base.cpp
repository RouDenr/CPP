// Copyright by decordel 2022

#include "Base.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

Base::~Base() {
}

Base *generate(void) {
    switch (std::rand() % 3 + 1) {
        case 1:
            return new A;
        case 2:
            return new B;
        case 3:
            return new C;
        default:
            return NULL;
    }
}
void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "It's A class" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "It's B class" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "It's C class" << std::endl;
}
void identify(Base& p) {
    try {
        (void) dynamic_cast<A&>(p);
        std::cout << "It's A class" << std::endl;
    } catch (...) {
        try {
            (void) dynamic_cast<B&>(p);
            std::cout << "It's B class" << std::endl;

        } catch (...) {
            try {
                (void) dynamic_cast<C&>(p);
                std::cout << "It's C class" << std::endl;

            } catch (...) {
            }
        }

    }

}