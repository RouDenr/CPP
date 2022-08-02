// Copyright 2022 decordel

#include <iostream>
#include <string>
#include "Harl.h"

int main(int argc, char** argv) {
    Harl harl;
    std::string arg;
    if (argc != 1)
        arg = argv[1];
    else
        arg = "DEBUG";
    harl.complain(arg);
}
