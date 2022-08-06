// Copyright by decordel 2022

#include "Animal.h"
#include "WrongAnimal.h"
#include "Cat.h"
#include "WrongCat.h"
#include "Dog.h"
#include <iostream>

int main(void) {
    Animal* meta = new Animal;
    Animal* j = new Dog();
    Animal* i = new Cat();
    WrongAnimal* w = new WrongCat();

    std::cout << "it is " << j->getType() << std::endl;
    std::cout << "it is " << i->getType() << std::endl;
    std::cout << "it is " << w->getType() << std::endl;
    std::cout << "it is " << meta->getType() << std::endl;
    j->makeSound();
    i->makeSound();
    w->makeSound();
    meta->makeSound();

    delete j;
    delete i;
    delete w;
    delete meta;
    return 0;
}