// Copyright 2022 decordel

#include <iostream>
#include "Harl.h"

Harl::Harl() {
}

void    Harl::debug() {
    std::cout << "We\'re no strangers to love" << std::endl
    << "You know the rules and so do" << std::endl;
}

void    Harl::info() {
    std::cout << "A full commitment\'s what I\'m thinking of " << std::endl
              << "You wouldn\'t get this from any other guy" << std::endl;
}

void    Harl::warning() {
    std::cout << "I just wanna tell you how I\'m feeling" << std::endl
              << "Gotta make you understand" << std::endl;
}

void    Harl::error() {
    std::cout << "Never gonna give you up" << std::endl
              << "Never gonna let you down" << std::endl
              << "Never gonna run around and desert you" << std::endl
              << "Never gonna make you cry" << std::endl
              << "Never gonna say goodbye" << std::endl
              << "Never gonna tell a lie and hurt you" << std::endl;
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

