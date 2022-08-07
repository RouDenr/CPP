// Copyright by decordel 2022

#include "Cat.h"
#include <iostream>

Cat::Cat() : Animal("Cat") {
    std::cout << CAT_HELLO_MES << std::endl;
}
Cat::Cat(int k) {
    this->k = k;
    std::cout << CAT_HELLO_MES << std::endl;
}
Cat::Cat(const Cat& orig) : Animal(orig) {
    this->k = orig.k;
    std::cout << CAT_HELLO_MES << std::endl;
}

Cat &Cat::operator=(const Cat &orig) {
    (void ) orig;
    std::cout << "I'm dog" << std::endl;
    return *this;
}

void Cat::makeSound() const {
    std::cout << CAT_SOUND_MES << std::endl;
}

Cat::~Cat() {
    std::cout << CAT_BYE_MES << std::endl;
}