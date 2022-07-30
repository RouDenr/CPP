// Copyright 2022 decordel

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
}

void    Zombie::_setName(std::string name) {
    this->_name = name;
}
void    Zombie::announce(void) {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void) {
    std::cout << this->_name << ": Aghh... *dies*" << std::endl;
}
