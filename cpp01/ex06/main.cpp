// Copyright 2022 decordel

#include <iostream>
#include "Harl.h"

int main() {
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("NOT_VALID");
}