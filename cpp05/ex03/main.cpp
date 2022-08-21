// Copyright by decordel 2022

#include "Bureaucrat.h"
#include "Intern.h"
#include <iostream>


int main(int argc, char **argv) {
    Intern intern;
    Bureaucrat bob("Bob", 1);
    if (argc == 1) {
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
    } else {
        try {
            Form* pardonForm;
            pardonForm = intern.makeForm(argv[1], "Micky");

            bob.signForm(*pardonForm);
            bob.executeForm(*pardonForm);
            delete pardonForm;
        } catch (Intern::FormNotExist& e) {
            std::cout << argv[1] << ": " << e.what() << std::endl;
        }
    }
    return 0;
}
