// Copyright 2022 decordel

#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    _name = name;
    _weapon = NULL;
}

void    HumanB::setWeapon(Weapon& weapon) {
    _weapon = &weapon;
}

void    HumanB::attack(void) {
    if (_weapon)
        std::cout << _name << " attacks with their " << _weapon->getType()
                  << std::endl;
    else
        std::cout << _name << " has nothing to attack " << std::endl;
}

HumanB::~HumanB() {
}
