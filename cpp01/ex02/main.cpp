// Copyright 2022 decordel

#include <iostream>
#include <string>

int main(void) {
    std::string brain = "HI THIS IS BRAIN";
    std::string *PTRbrain = &brain;
    std::string &REFbrain = brain;

    std::cout << "Brain address: " << &brain  << std::endl;
    std::cout << "Brain pointer address: " << &PTRbrain  << std::endl;
    std::cout << "Brain reference address: " << &REFbrain  << std::endl;
    std::cout << std::endl;
    std::cout << "Brain value: " << brain  << std::endl;
    std::cout << "Brain pointer value: " << PTRbrain  << std::endl;
    std::cout << "Brain reference value: " << REFbrain  << std::endl;
    return 0;
}

