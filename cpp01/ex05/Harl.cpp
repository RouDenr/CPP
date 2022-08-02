// Copyright 2022 decordel

#include <iostream>
#include "Harl.h"

Harl::Harl() {
}

void    Harl::debug() {
    std::cout << "d" << std::endl;
}

void    Harl::info() {
    std::cout << "i" << std::endl;
}

void    Harl::warning() {
    std::cout << "w" << std::endl;
}

void    Harl::error() {
    std::cout << "e" << std::endl;
}

void    Harl::complain(std::string level) {
    ptiptrde = (level == "DEBUG") ? &Harl::debug :
               (level == "INFO") ? &Harl::info :
               (level == "WARNING") ? &Harl::warning :
               (level == "ERROR") ? &Harl::error : NULL;
    if (ptiptrde)
        (this->*ptiptrde) ();
}

Harl::~Harl() {
}

