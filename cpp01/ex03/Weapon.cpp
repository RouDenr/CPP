// Copyright 2022 decordel

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) {
    _type = type;
}

std::string Weapon::getType() {
    return _type;
}

void        Weapon::setType(std::string type) {
    _type = type;
}

Weapon::~Weapon() {
}

