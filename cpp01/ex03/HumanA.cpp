// Copyright 2022 decordel

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _weapon(weapon) {
    _name = name;
    _weapon = weapon;
}

void    HumanA::setWeapon(Weapon weapon) {
    _weapon = weapon;
}

void    HumanA::attack(void) {
    std::cout << _name << " attacks with their " << _weapon.getType()
              << std::endl;
}

HumanA::~HumanA() {
}
