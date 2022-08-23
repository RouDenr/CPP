// Copyright by decordel 2022

#include "Brain.h"
#include <cstdlib>
#include <iostream>

Brain::Brain() {
    this->_ideas = new std::string[__BRAIN_SIZE__];
    for (int i = 0; i < __BRAIN_SIZE__; i++) {
        switch (std::rand() % 5 + 1) {
            case 1:
                this->_ideas[i] = __IDEA_1__;
                break;
            case 2:
                this->_ideas[i] = __IDEA_2__;
                break;
            case 3:
                this->_ideas[i] = __IDEA_3__;
                break;
            case 4:
                this->_ideas[i] = __IDEA_4__;
                break;
            case 5:
                this->_ideas[i] = __IDEA_5__;
                break;
        }
    }
    std::cout << __CONSTRUCTOR_MESS__ << std::endl;
}
Brain::Brain(const Brain &orig) {
    if (this != &orig) {
        *this = orig;
        std::cout << __CONSTRUCTOR_MESS__ << std::endl;
    }
}

Brain &Brain::operator=(const Brain &orig) {
    if (this != &orig) {
        if (this->_ideas)
            delete [] this->_ideas;
        this->_ideas = new std::string[__BRAIN_SIZE__];
        for (int i = 0; i < __BRAIN_SIZE__; i++) {
            this->_ideas[i] = orig._ideas[i];
        }
    }
    return *this;
}

std::string Brain::getRoundIdea() {
    return this->_ideas[rand() % 100];
}

Brain::~Brain() {
    if (this->_ideas)
        delete [] this->_ideas;
    std::cout << __DEAD_MESS__ << std::endl;
}