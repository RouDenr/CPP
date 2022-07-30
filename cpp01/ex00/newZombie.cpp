// Copyright 2022 decordel

#include "Zombie.hpp"

Zombie*  Zombie::newZombie(std::string name) {
    Zombie  *zombie;

    zombie = new Zombie;
    zombie->_setName(name);
    return zombie;
}
