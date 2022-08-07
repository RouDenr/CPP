// Copyright by decordel 2022

#include <ctime>
#include <cstdlib>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream>

int main(void) {
    srand(time(NULL));
    Animal* j = new Dog();
    Animal* i = new Cat();

    std::cout << std::endl << j->getIdea() << std::endl;
    std::cout << i->getIdea() << std::endl << std::endl;

    delete j;
    std::cout << std::endl;
    delete i;

    const int   size_zoo = 20;
    Animal*     zoo[size_zoo];

    for (int k = 0; k < size_zoo; k++) {
        std::cout << std::endl;
        if (k < size_zoo / 2)
            zoo[k] = new Cat();
        else
            zoo[k] = new Dog();
        std::cout << zoo[k]->getType() << ": "
                  << zoo[k]->getIdea() << std::endl;
    }

    std::cout << std::endl;
    for (int k = 0; k < size_zoo; k++) {
        delete zoo[k];
        std::cout << std::endl;
    }
    return 0;
}