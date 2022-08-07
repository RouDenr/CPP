// Copyright by decordel 2022

#include "WrongAnimal.h"
#include <iostream>

WrongAnimal::WrongAnimal() {
    this->type = "WrongAnimal";
    std::cout << WHELLO_MES << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) {
    this->type = type;
    std::cout << WHELLO_MES << std::endl;
}
WrongAnimal::WrongAnimal (const WrongAnimal& orig) {
    this->type = orig.getType();
    std::cout << WHELLO_MES << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal&orig) {
    this->type = orig.getType();
    return *this;
}

std::string WrongAnimal::getType() const {
    return this->type;
}
void WrongAnimal::makeSound() const {
    std::cout << WSOUND_MES << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << WBYE_MES  << std::endl;
}