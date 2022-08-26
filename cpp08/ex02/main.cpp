// Copyright by decordel 2022

#include "MutantStack.h"
#include <iostream>

void    printMutant(int n) {
    std::cout << n << ", ";
}

int main() {
    MutantStack<int> mutant;

    mutant.push(4);
    mutant.push(5);
    mutant.push(6);
    mutant.push(7);
    mutant.push(8);

    std::cout << "{ ";
    std::for_each(mutant.begin(), mutant.end(), printMutant);
    std::cout << "}" <<  std::endl;
    return 0;
}