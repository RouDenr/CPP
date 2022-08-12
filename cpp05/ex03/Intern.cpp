// Copyright by decordel 2022

#include "Intern.h"
#include <iostream>

Intern::Intern() {
    std::cout << "\"Hi, I'm a new intern, my name is... It doesn't matter\""
              << std::endl;
}
Intern::Intern(const Intern &orig) {
    std::cout << "\"Okay, I'll be like this trainee... What's his name?..\n"
                 "Although it doesn't matter\""
              << std::endl;
    (void) orig;
}

Intern &Intern::operator=(const Intern &orig) {
    std::cout << "\"Okay, I'll be like this trainee... What's his name?..\n"
                 "Although it doesn't matter\""
              << std::endl;
    (void) orig;
    return *this;
}

int Intern::_return_type_form_id(std::string key) {
    return (key == "shrubbery creation") ? SHRUBBERY :
           (key == "robotomy request") ? ROBOTOMY :
           (key == "presidential pardon") ? PARDON : -1;
}

const char *Intern::FormNotExist::what() const throw() {
    return "this form does not exist";
}

Form* Intern::makeForm(std::string type_form, std::string target) {
    switch (_return_type_form_id(type_form)) {
        case SHRUBBERY:
            return new ShrubberyCreationForm(target);
        case ROBOTOMY:
            return new RobotomyRequestForm(target);
        case PARDON:
            return new PresidentialPardonForm(target);
        default:
            std::cout << "SORRY. I can't figure out what kind of form you "
                         "mean.. But I'll definitely figure it out!"
                        << std::endl;
            throw FormNotExist();
    }
}

Intern::~Intern() {
    std::cout << "\"Maybe now I'll be hired full-time\""
              << std::endl;
}