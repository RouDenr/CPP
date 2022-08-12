// Copyright by decordel 2022

#include "RobotomyRequestForm.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() :
        Form("Robotomy request form", 72, 45) {
    this->target = "average_request";
    srand(time(NULL));
}
RobotomyRequestForm::RobotomyRequestForm(std::string target) :
        Form("Robotomy request form", 72, 45) {
    this->target = target;
    srand(time(NULL));
}
RobotomyRequestForm::RobotomyRequestForm(
        const RobotomyRequestForm &orig) : Form(orig) {
    this->target = orig.target;
}

RobotomyRequestForm &RobotomyRequestForm::
operator=(RobotomyRequestForm &orig) {
    this->target = orig.target;
    this->setSigned(orig.isSign());
    return *this;
}


void RobotomyRequestForm::execute(const Bureaucrat &executor) {
    if (!this->isSign())
        throw FormNotSign();
    if (!checkToExecute(executor.getGrade()))
        throw GradeTooLowException();

    system("say -vKanya bib bib robotomized star t");
    if (std::rand() % 2 == 0) {
        std::cout << this->target << " has been robotomized {◠﹏◠}"
                  << std::endl;
    } else {
        std::cout << this->target << " robotomy failed ¯\\{°_o}/¯"
                  << std::endl;
    }

}

RobotomyRequestForm::~RobotomyRequestForm() {
}