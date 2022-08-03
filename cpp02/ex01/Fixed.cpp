// Created by Dennet Cordelia on 03.08.2022.

#include <iostream>
#include <cmath>
#include "Fixed.h"

/*
 -- Constructors
*/
Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    this->_value = 0;
}

Fixed::Fixed(const int value) {
    std::cout << "Integer constructor called" << std::endl;
    this->_value = value << this->_bits;
}

Fixed::Fixed(const float value) {
    std::cout << "Float constructor called" << std::endl;
    this->_value = roundf(value * (1 << this->_bits));

}

Fixed::Fixed(const Fixed &copy) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = copy.getRawBite();
}


/*
 -- Operators
*/
Fixed &Fixed::operator=(const Fixed &copy) {
    std::cout << "Copy assigment operator called" << std::endl;
    this->_value = copy.getRawBite();
    return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed) {
    stream << fixed.toFloat();
    return stream;
}


/*
 -- Functions
*/
int     Fixed::getRawBite() const {
    std::cout << "getRawBite member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBite(const int new_value) {
    std::cout << "setRawBite member function called" << std::endl;
    this->_value = new_value;
}

int Fixed::toInt() const {
    return this->_value / (1 << this->_bits);
}

float Fixed::toFloat() const {
    return (float) this->_value / (1 << this->_bits);
}


/*
 -- Destructor
*/
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}