// Copyright 2022 decordel

#include "Zombie.hpp"
#include <iostream>

int main(void) {
    Zombie *mike = NULL;
    Zombie *natan = NULL;

    mike = Zombie::newZombie("Mike");
    mike->announce();
    delete mike;
    Zombie::randomChump("the Guy");
    natan = Zombie::newZombie("Natan");
    natan->announce();
    delete natan;
    return 0;
}

