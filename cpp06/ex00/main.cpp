// Copyright by decordel 2022

#include <iostream>
#include "Conversion.h"

bool _isCharConvert(std::string arg) {
    return arg.size() == 1 && !isdigit(arg[0]);
}
bool _isIntConvert(std::string arg) {
    for (int i = 0; arg[i]; i++) {
        if (!isdigit(arg[i]))
            return false;
    }
    return true;
}
bool _isFloatConvert(std::string arg) {
    bool point = false;
    for (int i = 0; arg[i]; i++) {
        if (!isdigit(arg[i])) {
            if (arg[i] == '.' && !point) {
                point = true;
                continue;
            } else if (i == int(arg.size() - 1) && arg[i] == 'f')
                return point;
            return false;
        }
    }
    return false;
}
bool _isDoubleConvert(std::string arg) {
    bool point = false;
    for (int i = 0; arg[i]; i++) {
        if (!isdigit(arg[i])) {
            if (arg[i] == '.' && !point) {
                point = true;
                continue;
            }
            return false;
        }
    }
    return point;
}

int main(int argc, char **argv) {
    Conversion* conversion;
    std::string arg;

    if (argc != 2)
        return 1;
    arg = argv[1];
    try {
        if (_isCharConvert(arg))
            conversion = new Conversion(Conversion::toChar(arg));
        else if (_isIntConvert(arg))
            conversion = new Conversion(Conversion::toInt(arg));
        else if (_isFloatConvert(arg))
            conversion = new Conversion(Conversion::toFloat(arg));
        else if (_isDoubleConvert(arg))
            conversion = new Conversion(Conversion::toDouble(arg));
        else
            conversion = Conversion::nanConversion();
    } catch (std::exception& e) {
            conversion = new Conversion();
    }

    conversion->printInt();
    conversion->printChar();
    conversion->printFloat();
    conversion->printDouble();

    delete conversion;
    return 0;
}