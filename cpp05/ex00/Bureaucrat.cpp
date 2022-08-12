// Copyright by decordel 2022

#include <iostream>
#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {
    this->_name = "Steve";
    this->_grade = 75;
    std::cout << "Average Steve started work" << std::endl;
}
Bureaucrat::Bureaucrat(int grade) {
    this->_name = "Steve";
    if (grade > 150)
        throw GradeTooHighException();
    if (grade < 1)
        throw GradeTooLowException();
    this->_grade = grade;
    std::cout << "Grade " << getGrade() << " " << getName() << " started work"
              << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade) {
    this->_name = name;
    if (grade > 150)
        throw GradeTooHighException();
    if (grade < 1)
        throw GradeTooLowException();
    this->_grade = grade;
    std::cout << "Grade " << getGrade() << " " << getName() << " started work"
              << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &orig) {
    this->_name = orig.getName();
    this->_grade = orig.getGrade();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &orig) {
    this->_name = orig.getName();
    this->_grade = orig.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const {
    return this->_name;
}

int Bureaucrat::getGrade() const {
    return this->_grade;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade too high";
}

Bureaucrat::~Bureaucrat() {
    std::cout << "Grade " << getGrade() << " " << getName() << " stop work"
              << std::endl;
}