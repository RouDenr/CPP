// Copyright 2022 decordel

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name) {
    Zombie*  zombies = NULL;

    zombies = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombies[i]._setName(name);
    return (zombies);
}
