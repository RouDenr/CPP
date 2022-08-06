// Copyright by decordel 2022

#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap("P. Fragtrappington", "FragTrap",
                                    100, 100, 30) {
    std::cout << "FragTrap " << this->getName() << " was born!"
              << std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, "FragTrap",
                                                100, 100, 30) {
    std::cout << "FragTrap " << this->getName() << " was born!"
              << std::endl;
}
FragTrap::FragTrap(const FragTrap &orig) : ClapTrap(orig) {
    std::cout << "FragTrap " << this->getName() << " was born!"
              << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &orig) {
    (ClapTrap) *this = (ClapTrap) orig;
    std::cout << "FragTrap " << this->getName() << " copy the body from "
              << orig.getName() << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->getName() << ": high five request approved" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->getName() << " gone at the border"
              << std::endl;
}