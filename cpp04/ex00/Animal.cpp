// Copyright by decordel 2022

#include "Animal.h"
#include <iostream>

Animal::Animal() {
    this->type = "Animal";
    std::cout << HELLO_MES << std::endl;
}
Animal::Animal(std::string type) {
    this->type = type;
    std::cout << HELLO_MES << std::endl;
}
Animal::Animal(const Animal &orig) {
    this->type = orig.getType();
    std::cout << HELLO_MES << std::endl;
}

Animal &Animal::operator=(const Animal &orig) {
    this->type = orig.getType();
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}
void Animal::makeSound() const {
    std::cout << SOUND_MES << std::endl;
}

Animal::~Animal() {
    std::cout << BYE_MES  << std::endl;
}