// Copyright by decordel 2022

#include <iostream>
#include "ClapTrap.h"

int main(void) {
    ClapTrap defaultTrap;
    ClapTrap wolterTrap("Wolter");
    ClapTrap copyTrap(wolterTrap);

    copyTrap = ClapTrap("C3P-O");
    copyTrap.attack(wolterTrap.getName());
    wolterTrap.takeDamage(copyTrap.getAttackDamage());
    defaultTrap.beRepaired(1);
    defaultTrap.takeDamage(12);
    defaultTrap.attack(copyTrap.getName());
    return 0;
}