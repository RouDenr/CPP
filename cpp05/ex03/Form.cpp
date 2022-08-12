// Copyright by decordel 2022

#include "Form.h"
#include <iostream>

Form::Form() : _name("Average Form"), _needGradeSign(75),
                _needGradeExecute(75){
    this->_signed = false;
    std::cout << this->getName() << " created" << std::endl;
}
Form::Form(const std::string& name, int grade_need_to_sign, int grade_need_to_exec)
    :   _name(name), _needGradeSign(grade_need_to_sign),
        _needGradeExecute(grade_need_to_exec) {
    this->_signed = false;
    std::cout << this->getName() << " created" << std::endl;
}
Form::Form(const Form &orig) : _name(orig.getName()),
            _needGradeSign(orig.getGradeSign()),
            _needGradeExecute(orig.getGradeExec()) {
    this->_signed = orig.isSign();
    std::cout << this->getName() << " created" << std::endl;
}

Form &Form::operator=(const Form &orig) {
    this->_signed = orig.isSign();
    std::cout << "WARNING! Const value " << this->getName()
              << " remain the same" << std::endl;
    return *this;
}

bool Form::isSign() const {
    return this->_signed;
}

bool Form::checkRequiredToSign(int grade) const {
    return grade <= getGradeSign();
}

bool Form::checkToExecute(int grade) const {
    return grade <= getGradeExec();
}
std::string Form::getName() const {
    return this->_name;
}
int Form::getGradeSign() const {
    return this->_needGradeSign;
}
int Form::getGradeExec() const {
    return this->_needGradeExecute;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "grade too low";
}

const char *Form::FormNotSign::what() const throw() {
    return "form not sign";
}

void Form::beSigned(const Bureaucrat& bureaucrat) {
    if (checkRequiredToSign(bureaucrat.getGrade()))
        this->_signed = true;
    else
        throw GradeTooLowException();
    std::cout << this->getName() << " signed by " << bureaucrat.getName()
              << std::endl;
}

void Form::setSigned(bool sing) {
    this->_signed = sing;
}

Form::~Form() {
}