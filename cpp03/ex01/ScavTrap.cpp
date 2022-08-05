// Copyright by decordel 2022

#include "ScavTrap.h"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("P. Scavtrappington", "ScanTrap", 100, 50, 20) {
    std::cout << "ScavTrap " << this->getName() << " was born!"
              << std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, "ScavTrap", 100, 50, 20) {
    std::cout << "ScavTrap " << this->getName() << " was born!"
              << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &orig) : ClapTrap(orig) {
    std::cout << "ScavTrap " << this->getName() << " was born!"
              << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->getName()
              << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->getName() << " gone at the border"
              << std::endl;
}