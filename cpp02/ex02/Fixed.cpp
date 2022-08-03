// Created by Dennet Cordelia on 03.08.2022.

#include <iostream>
#include <cmath>
#include "Fixed.h"

/*
 -- Constructors
*/
Fixed::Fixed() {
    this->_value = 0;
}

Fixed::Fixed(const int value) {
    this->_value = value << this->_bits;
}

Fixed::Fixed(const float value) {
    this->_value = roundf(value * (1 << this->_bits));

}

Fixed::Fixed(const Fixed &copy) {
    this->_value = copy.getRawBite();
}


/*
 -- Overload operators
*/
Fixed &Fixed::operator=(const Fixed &copy) {
    this->_value = copy.getRawBite();
    return (*this);
}

Fixed &Fixed::operator++(void) {
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed   temp = *this;

    this->_value++;
    return temp;
}

Fixed &Fixed::operator--(void) {
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed   temp = *this;

    this->_value--;
    return temp;
}

//  comparison operators
bool Fixed::operator>(const Fixed& fix2) {
    return (this->_value > fix2.getRawBite());
}
bool Fixed::operator>=(const Fixed& fix2) {
    return (this->_value >= fix2.getRawBite());
}
bool Fixed::operator<(const Fixed& fix2) {
    return (this->_value < fix2.getRawBite());
}
bool Fixed::operator<=(const Fixed& fix2) {
    return (this->_value <= fix2.getRawBite());
}
bool Fixed::operator==(const Fixed& fix2) {
    return (this->_value == fix2.getRawBite());
}
bool Fixed::operator!=(const Fixed& fix2) {
    return (this->_value != fix2.getRawBite());
}

//  arithmetic operators
Fixed Fixed::operator+(const Fixed &term) {
    return Fixed(this->toFloat() + term.toFloat());
}
Fixed Fixed::operator-(const Fixed &subtrahend) {
    return Fixed(this->toFloat() - subtrahend.toFloat());
}
Fixed Fixed::operator*(const Fixed &multi) {
    return Fixed(this->toFloat() * multi.toFloat());
}
Fixed Fixed::operator/(const Fixed &div) {
    return Fixed(this->toFloat() / div.toFloat());
}


std::ostream& operator<<(std::ostream& stream, const Fixed& fixed) {
    stream << fixed.toFloat();
    return stream;
}


/*
 -- Functions
*/
int     Fixed::getRawBite() const {
    return this->_value;
}

void Fixed::setRawBite(const int new_value) {
    this->_value = new_value;
}

int Fixed::toInt() const {
    return this->_value / (1 << this->_bits);
}

float Fixed::toFloat() const {
    return (float) this->_value / (1 << this->_bits);
}

/*
 -- Static functions
*/
Fixed Fixed::max(Fixed &fix1, Fixed &fix2) {
    if (fix1 > fix2)
        return fix1;
    return fix2;
}
Fixed Fixed::max(const Fixed &fix1, const Fixed &fix2) {
    if (fix1.getRawBite() > fix2.getRawBite())
        return fix1;
    return fix2;
}
Fixed Fixed::min(Fixed &fix1, Fixed &fix2) {
    if (fix1 < fix2)
        return fix1;
    return fix2;
}
Fixed Fixed::min(const Fixed &fix1, const Fixed &fix2) {
    if (fix1.getRawBite() < fix2.getRawBite())
        return fix1;
    return fix2;
}

/*
 -- Destructor
*/
Fixed::~Fixed() {
}