// Copyright by decordel 2022

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"
#include "Intern.h"
#include <iostream>


int main() {
    Intern intern;
    Bureaucrat bob("Bob", 1);
    try {
        Form* pardonForm;
        pardonForm = intern.makeForm("presidential pardan", "Micky");
        bob.signForm(*pardonForm);
        delete pardonForm;
    } catch (Intern::FormNotExist& e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form* pardonForm;
        pardonForm = intern.makeForm("presidential pardon", "Micky");

        bob.signForm(*pardonForm);
        bob.executeForm(*pardonForm);
        delete pardonForm;
    } catch (Intern::FormNotExist& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
