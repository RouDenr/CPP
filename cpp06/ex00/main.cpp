// Copyright by decordel 2022

#include <iostream>
#include "Conversion.h"

int main(int argc, char **argv) {
    if (argc != 2)
        return 1;
    std::cout << "INT: " << Conversion::toInt(argv[1]) << std::endl;
    return 0;
}