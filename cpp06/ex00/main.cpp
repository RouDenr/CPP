// Copyright by decordel 2022

#include <iostream>
#include "Conversion.h"

bool _isCharConvert(std::string arg) {
    return arg.size() == 1 && !isdigit(arg[0]);
}
bool _isIntConvert(std::string arg) {
    return arg.size() == 1 && !isdigit(arg[0]);
}
bool _isFloatConvert(std::string arg) {
    return arg.size() == 1 && !isdigit(arg[0]);
}
bool _isDoubleConvert(std::string arg) {
    return arg.size() == 1 && !isdigit(arg[0]);
}

int main(int argc, char **argv) {
    Conversion* conversion;
    std::string arg;

    if (argc != 2)
        return 1;
    arg = argv[1];
    if (_isCharConvert(arg))
        conversion = new Conversion(Conversion::toChar(arg));
    else if (_isIntConvert(arg))
        conversion = new Conversion(Conversion::toInt(arg));
    else if (_isFloatConvert(arg))
        conversion = new Conversion(Conversion::toFloat(arg));
    else if (_isDoubleConvert(arg))
        conversion = new Conversion(Conversion::toDouble(arg));
    else
        conversion = new Conversion();

    std::cout << "INT: " << conversion->intToString() << std::endl;
    std::cout << "CHAR: " << conversion->charToString() << std::endl;
    std::cout << "FLOAT: " << conversion->floatToString() << std::endl;
    std::cout << "DOUBLE: " << conversion->doubleToString() << std::endl;

    delete conversion;
    return 0;
}