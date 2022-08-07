// Copyright by decordel 2022

#include "Animal.h"
#include <iostream>

Animal::Animal() {
    this->type = "Animal";
    this->_brain = new Brain();
    std::cout << HELLO_MES << std::endl;
}
Animal::Animal(std::string type) {
    this->type = type;
    this->_brain = new Brain();
    std::cout << HELLO_MES << std::endl;
}
Animal::Animal(const Animal &orig) {
    this->type = orig.getType();

    std::cout << HELLO_MES << std::endl;
}

Animal &Animal::operator=(const Animal &orig) {
    std::cout << "I'm anim" << std::endl;
    this->type = orig.getType();
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}
Brain *Animal::getBrain() const {
    return this->_brain;
}
std::string Animal::getIdea() const {
    return this->_brain->getRoundIdea();
}
void Animal::makeSound() const {
    std::cout << SOUND_MES << std::endl;
}

Animal::~Animal() {
    delete this->_brain;
    std::cout << BYE_MES  << std::endl;
}