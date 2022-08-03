// Created by Dennet Cordelia on 03.08.2022.

#include <iostream>
#include "Fixed.h"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = copy.getRawBite();

}

Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assigment operator called" << std::endl;
    this->_value = copy.getRawBite();
    return (*this);
}

int     Fixed::getRawBite() const {
    std::cout << "getRawBite member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBite(const int new_value) {
    std::cout << "setRawBite member function called" << std::endl;
    this->_value = new_value;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;

}