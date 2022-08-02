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

int Harl::miniMap(std::string key) {
    return (key == "DEBUG") ? DEBUG :
           (key == "INFO") ? INFO :
           (key == "WARNING") ? WARNING :
           (key == "ERROR") ? ERROR : -1;
}

void    Harl::complain(std::string level) {
    switch (miniMap(level)) {
        case DEBUG :
            debug();
        case INFO :
            info();
        case WARNING :
            warning();
        case ERROR :
            error();
            break;
        default:
            std::cout << "I am not sure how tired I am today..." << std::endl;
    }
}

Harl::~Harl() {
}

