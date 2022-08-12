// Copyright by decordel 2022

#include "PresidentialPardonForm.h"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() :
        Form("presidential pardon form", 25, 5) {
    this->target = "Average Steve";
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
        Form("presidential pardon form", 25, 5) {
    this->target = target;
}
PresidentialPardonForm::PresidentialPardonForm(
        const PresidentialPardonForm &orig) : Form(orig) {
    this->target = orig.target;
}

PresidentialPardonForm &PresidentialPardonForm::
operator=(PresidentialPardonForm &orig) {
    this->target = orig.target;
    this->setSigned(orig.isSign());
    return *this;
}


void PresidentialPardonForm::execute(const Bureaucrat &executor) {
    if (!this->isSign())
        throw FormNotSign();
    if (!checkToExecute(executor.getGrade()))
        throw GradeTooLowException();

    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox"
              << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}