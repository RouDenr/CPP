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
Bureaucrat::Bureaucrat(const std::string& name, int grade) {
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

void Bureaucrat::signForm(Form &form) const {
    try {
        form.beSigned(*this);
    } catch (const Form::GradeTooLowException& e){
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because " << e.what() << "for sign" << "." << std::endl;
    } catch (const Form::GradeTooHighException& e){
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because " << e.what() << "for sign" << "." << std::endl;
    } catch (const std::exception& e) {
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because... idk." << std::endl;
    }
}

void Bureaucrat::executeForm(Form &form) const {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName()
                  << std::endl;
    } catch (const Form::GradeTooLowException& e){
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because " << e.what() << " for execute" << "." << std::endl;
    } catch (const Form::GradeTooHighException& e){
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because " << e.what() << " for execute" << "." << std::endl;
    } catch (const Form::FormNotSign& e) {
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because " << e.what() << " for execute" << "." << std::endl;
    } catch (const std::exception& e) {
        std::cout << getName() << " couldn’t sign " << form.getName()
                  <<" because... idk." << std::endl;
    }
}


Bureaucrat::~Bureaucrat() {
    std::cout << "Grade " << this->getGrade() << " " << this->getName()
              << " stop work" << std::endl;
}