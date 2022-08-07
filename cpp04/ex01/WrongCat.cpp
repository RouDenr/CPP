// Copyright by decordel 2022

#include "WrongCat.h"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat") {
    std::cout << CAT_HELLO_MES << std::endl;
}
WrongCat::WrongCat(const WrongCat& orig) : WrongAnimal(orig) {
    std::cout << CAT_HELLO_MES << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &orig) {
    (WrongAnimal) *this = (WrongAnimal) orig;
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << CAT_SOUND_MES << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << CAT_BYE_MES << std::endl;
}