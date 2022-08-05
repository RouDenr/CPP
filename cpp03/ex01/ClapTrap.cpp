// Copyright by decordel 2022

#include <iostream>
#include "ClapTrap.h"

ClapTrap::ClapTrap() {
    this->_name = "P. Claptrappington";
    this->_type = "ClapTrap";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << this->_name << " was born!"
              << std::endl;
}
ClapTrap::ClapTrap(std::string name) {
    this->_name = name;
    this->_type = "ClapTrap";
    this->_hit_points = 10;
    this->_energy_points = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << this->_name << " was born!"
              << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& orig) {
    this->_name = orig._name;
    this->_type = orig._type;
    this->_hit_points = orig._hit_points;
    this->_energy_points = orig._energy_points;
    this->_attack_damage = orig._attack_damage;
    std::cout << "ClapTrap " << this->_name << " was born!"
              << std::endl;
}
ClapTrap::ClapTrap(std::string name, std::string type, unsigned int hit_points,
                   unsigned int energy_points, unsigned int attack_damage) {
    this->_name = name;
    this->_type = type;
    this->_hit_points = hit_points;
    this->_energy_points = energy_points;
    this->_attack_damage = attack_damage;
    std::cout << "ClapTrap " << this->_name << " was born!"
              << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& orig) {
    std::cout << "ClapTrap " << this->_name << " copy the body from "
              << orig._name << "!" << std::endl;
    this->_name = orig._name;
    this->_type = orig._type;
    this->_hit_points = orig._hit_points;
    this->_energy_points = orig._energy_points;
    this->_attack_damage = orig._attack_damage;
    return *this;
}

std::string ClapTrap::getName() {
    return this->_name;
}

std::string ClapTrap::getType() {
    return this->_type;
}

unsigned int ClapTrap::getAttackDamage() {
    return this->_attack_damage;
}

bool ClapTrap::isActive() {
    if (this->_energy_points != 0 && this->_hit_points != 0)
        return true;
    std::cout << this->_type << " " << this->_name << " can't do anything "
              << std::endl;
    return false;
}

void ClapTrap::attack(const std::string target) {
    if (isActive()) {
        std::cout << this->_type << " " << this->_name << " attacks " << target
                  << ", causing " << this->_attack_damage
                  << " points of damage!" << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    if ((int) (this->_hit_points - amount) >= 0)
        this->_hit_points -= amount;
    else
        this->_hit_points = 0;
    std::cout << this->_type << " " << this->_name << " take damage " << amount
              << " hit points and now has " << this->_hit_points
              << " health!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (isActive()) {
        if (this->_hit_points + amount < 100)
            this->_hit_points += amount;
        else
            this->_hit_points = 100;
        std::cout << this->_type << " " << this->_name << " repaired " << amount
                  << " hit points and now has " << this->_hit_points
                  << " health!" << std::endl;
    }
}


ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " gone at the border"
              << std::endl;
}