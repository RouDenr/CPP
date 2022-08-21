// Copyright by decordel 2022

#include "Conversion.h"
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <limits>

Conversion::Conversion() {
    this->_int.value = 0;
    this->_int.flag = INF_PLUS;
    this->_char.value = 0;
    this->_char.flag = INF_PLUS;
    this->_float.value = 0.f;
    this->_float.flag = INF_PLUS;
    this->_double.value = 0.;
    this->_double.flag = INF_PLUS;
}
Conversion::Conversion(Conversion &orig) {
    *this = orig;
}
Conversion::Conversion(const int arg) {
    this->_int.value = arg;
    this->_int.flag = OK;

    if (!isprint(arg)) {
        this->_char.flag = NOD;
    } else {
        this->_char.value = static_cast<char>(arg);
        this->_char.flag = OK;
    }
    this->_float.value = static_cast<float>(arg);
    this->_float.flag = OK;
    this->_double.value = static_cast<double>(arg);
    this->_double.flag = OK;
}
Conversion::Conversion(const char arg) {
    this->_char.value = arg;
    this->_char.flag = OK;
    this->_int.value = static_cast<int>(arg);
    this->_int.flag = OK;
    this->_float.value = static_cast<float>(arg);
    this->_float.flag = OK;
    this->_double.value = static_cast<double>(arg);
    this->_double.flag = OK;
}
Conversion::Conversion(const float arg) {
    this->_float.value = arg;
    this->_float.flag = OK;

    if (!isprint(arg)) {
        this->_char.flag = NOD;
    } else {
        this->_char.value = static_cast<char>(arg);
        this->_char.flag = OK;
    }
    this->_int.value = static_cast<int>(arg);
    this->_int.flag = OK;
    this->_double.value = static_cast<double>(arg);
    this->_double.flag = OK;
}
Conversion::Conversion(const double arg) {
    this->_double.value = arg;
    this->_double.flag = OK;

    if (isprint(arg)) {
        this->_char.flag = NOD;
    } else {
        this->_char.value = static_cast<char>(arg);
        this->_char.flag = OK;
    }
    this->_int.value = static_cast<int>(arg);
    this->_int.flag = OK;
    this->_float.value = static_cast<float >(arg);
    this->_float.flag = OK;
}

Conversion *Conversion::nanConversion() {
    Conversion *nan = new Conversion();
    nan->_int.flag = IMPOSSIBLE;
    nan->_char.flag = IMPOSSIBLE;
    nan->_float.flag = NAN;
    nan->_double.flag = NAN;
    return nan;
}

Conversion &Conversion::operator=(const Conversion &orig) {
    this->_int.value = orig._int.value;
    this->_int.flag = orig._int.flag;
    this->_char.value = orig._char.value;
    this->_char.flag = orig._char.flag;
    this->_float.value = orig._float.value;
    this->_float.flag = orig._float.flag;
    this->_float.value = orig._double.value;
    this->_float.flag = orig._double.flag;
    return *this;
}

int Conversion::toInt(const std::string &arg) {
    long test;
    int result;
    char* end;

    test = std::strtol(arg.c_str(), &end, 10);
    if (test > INT32_MAX || test < INT32_MIN)
        throw std::invalid_argument("inf");
    result = static_cast<int>(test);

    return result;
}
double Conversion::toDouble(const std::string &arg) {

    long double test;
    double result;
    char* end;

    test = std::strtold(arg.c_str(), &end);
    if (test > std::numeric_limits<double>::max() ||
        test < std::numeric_limits<double>::min())
        throw std::invalid_argument("inf");
    result = static_cast<double>(test);

    return result;
}
float Conversion::toFloat(const std::string& arg) {
    double test;
    float result;
    char* end;

    test = std::strtold(arg.c_str(), &end);
    if (test > std::numeric_limits<float>::max() ||
        test < std::numeric_limits<float>::min())
        throw std::invalid_argument("inf");
    result = static_cast<float>(test);

    return result;
}
char Conversion::toChar(const std::string &arg) {
    return arg[0];
}

void Conversion::printInt() const {
    std::cout << "INT: ";
    if (this->_int.flag != OK)
        std::cout << _flagSting(this->_int.flag);
    else
        std::cout << this->_int.value;
    std::cout << std::endl;
}
void Conversion::printChar() const {
    std::cout << "CHAR: ";
    if (this->_char.flag != OK)
        std::cout << _flagSting(this->_char.flag);
    else
        std::cout << this->_char.value;
    std::cout << std::endl;
}
void Conversion::printFloat() const {
    std::cout << "FLOAT: ";
    if (this->_float.flag != OK)
        std::cout << _flagSting(this->_float.flag);
    else if (this->_float.value - (int)this->_float.value == 0)
        std::cout << (this->_float.value) << ".0";
    else
        std::cout << (this->_float.value) << "f";
    std::cout << "f" << std::endl;
}
void Conversion::printDouble() const {

    std::cout << "DOUBLE: ";
    if (this->_double.flag != OK)
        std::cout << _flagSting(this->_double.flag);
    else if (this->_float.value - (int)this->_float.value == 0)
        std::cout << this->_double.value << ".0";
    else
        std::cout << this->_double.value;
    std::cout << std::endl;
}

std::string Conversion::_flagSting(int n) const{
    switch (n) {
        case IMPOSSIBLE:
            return "impossible";
        case NAN:
            return "nan";
        case NOD:
            return "Non displayable";
        case INF_PLUS:
            return "inf";
        case INF_MINUS:
            return "inf-";
    }
    return "";
}

Conversion::~Conversion() {
}