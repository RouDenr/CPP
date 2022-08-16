// Copyright by decordel 2022

#include "Conversion.h"
#include <string>
#include <cstdlib>
#include <climits>
#include <stdexcept>
#include <limits>

Conversion::Conversion(const std::string& arg) {
    if (arg.size() == 1 && !isdigit(arg[0]))
        _charConstructor(toChar(arg));
    if ()
}
Conversion::Conversion(Conversion &orig) {
    this->_arg = orig._arg;
}

Conversion &Conversion::operator=(Conversion &orig) {
    this->_arg = orig._arg;
    return *this;
}

int Conversion::toInt(const std::string &arg) {
    long test;
    int result;
    char* end;

    test = std::strtol(arg.c_str(), &end, 10);
    if (test > INT32_MAX || test < INT32_MIN)
        return -1;
    result = (int)test;

    return result;
}

double Conversion::toDouble(const std::string &arg) {

    long double test;
    double result;
    char* end;

    test = std::strtold(arg.c_str(), &end);
    if (test > std::numeric_limits<double>::max() ||
        test < std::numeric_limits<double>::min())
        return -1;
    result = (double)test;

    return result;
}

float Conversion::toFloat(const std::string& arg) {
    double test;
    float result;
    char* end;

    test = std::strtold(arg.c_str(), &end);
    if (test > std::numeric_limits<float>::max() ||
        test < std::numeric_limits<float>::min())
        throw std::invalid_argument("not ");
    result = (float)test;

    return result;
}

bool Conversion::_argBoolIter(const std::string &arg, int (*f)(int)) {
    for (int i = 0; i < arg.size(); i++)
        if (f(arg[i]))
            return true;
    return false;
}