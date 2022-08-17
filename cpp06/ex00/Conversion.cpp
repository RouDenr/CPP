// Copyright by decordel 2022

#include "Conversion.h"
#include <cstdlib>
//#include <climits>
#include <stdexcept>
#include <limits>

Conversion::Conversion() {
    this->_int.value = 0;
    this->_int.flag = IMPOSSIBLE;
    this->_char.value = 0;
    this->_char.flag = IMPOSSIBLE;
    this->_float.value = 0.f;
    this->_float.flag = NAN;
    this->_double.value = 0.;
    this->_double.flag = NAN;
}
Conversion::Conversion(Conversion &orig) {
    *this = orig;
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

char Conversion::toChar(const std::string &arg) {
    return arg[0];
}


int Conversion::_argCountIter(const std::string &arg, int (*f)(int)) {
    int count = 0;

    for (int i = 0; i < arg.size(); i++)
        if (f(arg[i]))
            count++;
    return count;
}