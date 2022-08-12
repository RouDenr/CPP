// Copyright by decordel 2022

#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"


int main() {
    Bureaucrat Sten("Sten", 1);
    Bureaucrat average(150);
    ShrubberyCreationForm def;
    RobotomyRequestForm requestForm;
    PresidentialPardonForm pardonForm;

    Sten.signForm(def);
    Sten.signForm(requestForm);
    Sten.signForm(pardonForm);
//    average.executeForm(def);
//    Sten.executeForm(def);
    Sten.executeForm(requestForm);
    Sten.executeForm(pardonForm);
    return 0;
}
