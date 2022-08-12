// Copyright by decordel 2022

#include "ShrubberyCreationForm.h"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
                       Form("Shrubbery creation form", 145, 137) {
    this->target = "average_place";
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :
        Form("Shrubbery creation form", 145, 137) {
    this->target = target;
}
ShrubberyCreationForm::ShrubberyCreationForm(
        const ShrubberyCreationForm &orig) : Form(orig) {
    this->target = orig.target;
}

ShrubberyCreationForm &ShrubberyCreationForm::
                    operator=(ShrubberyCreationForm &orig) {
    this->target = orig.target;
    this->setSigned(orig.isSign());
    return *this;
}


void ShrubberyCreationForm::execute(const Bureaucrat &executor) {
    if (!this->isSign())
        throw FormNotSign();
    if (!checkToExecute(executor.getGrade()))
        throw GradeTooLowException();
    std::ofstream out_file((this->target + "_shrubbery").c_str(),
                           std::ofstream::out);
    if (out_file.bad())
        return;
    out_file << executor.getName() << ": " << this->target
             << std::endl;
    out_file << _TREE_ << std::endl;
    out_file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}