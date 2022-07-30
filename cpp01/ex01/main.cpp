// Copyright 2022 decordel

#include "Zombie.hpp"
#include <iostream>

int main(void) {
    Zombie  *tonys = NULL;
    int     n = 10;

    tonys = Zombie::zombieHorde(n, "Tony");
    for (int i = 0; i < n; i++)
        tonys[i].announce();
    delete [] tonys;
    return 0;
}

