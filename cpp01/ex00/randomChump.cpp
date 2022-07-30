// Copyright 2022 decordel

#include "Zombie.hpp"

void      Zombie::randomChump(std::string name) {
    Zombie  zombie;

    zombie._setName(name);
    zombie.announce();
}
