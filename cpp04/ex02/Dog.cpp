// Copyright by decordel 2022

#include "Dog.h"
#include <iostream>

Dog::Dog() : Animal("Dog") {
    std::cout << DOG_HELLO_MES << std::endl;
}
Dog::Dog(const Dog& orig) : Animal(orig) {
    std::cout << DOG_HELLO_MES << std::endl;
}

Dog &Dog::operator=(const Dog &orig) {
    (void ) orig;
    std::cout << "I'm dog" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << DOG_SOUND_MES << std::endl;
}

Dog::~Dog() {
    std::cout << DOG_BYE_MES << std::endl;
}
