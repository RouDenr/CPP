// Copyright by decordel 2022

#include <iostream>
#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main(void) {
    ClapTrap wolterTrap("Wolter");
    ScavTrap tedTrap("Ted");
    FragTrap houstonTrap("Houston");

    houstonTrap.beRepaired(0);
    wolterTrap.attack(tedTrap.getName());
    tedTrap.takeDamage(wolterTrap.getAttackDamage());
    tedTrap.attack(wolterTrap.getName());
    wolterTrap.takeDamage(tedTrap.getAttackDamage());
    wolterTrap.beRepaired(80);
    houstonTrap.highFivesGuys();
    tedTrap.guardGate();
    return 0;
}