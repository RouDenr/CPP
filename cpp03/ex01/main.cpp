// Copyright by decordel 2022

#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"

int main(void) {
    ClapTrap wolterTrap("Wolter");
    ScavTrap tedTrap("Ted");

    wolterTrap.attack(tedTrap.getName());
    tedTrap.takeDamage(wolterTrap.getAttackDamage());
    tedTrap.attack(wolterTrap.getName());
    wolterTrap.takeDamage(tedTrap.getAttackDamage());
    tedTrap.guardGate();
    return 0;
}