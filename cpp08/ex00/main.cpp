// Copyright by decordel 2022

#include "easyfind.h"
# include <vector>
# include <iostream>

void    randVal(int &n) {
    n = std::rand() % 10;
}
void    printVal(int n) {
    std::cout << n << " ";
}

void tryFind(std::vector<int> arr, int find) {
    try {
        std::cout << "find " << find << " in arr" << std::endl;
        std::vector<int>::iterator ret = easyfind(arr, find);
        std::cout << "we find " << *ret << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    srand(time(NULL));
    std::vector<int> arr(10);
    std::vector<int> arrFive(1, 5);
    std::vector<int> invalArr(0);
    std::for_each(arr.begin(), arr.end(), randVal);
    std::for_each(arr.begin(), arr.end(), printVal);
    std::cout << std::endl;

    std::cout << std::endl << "Rand arr" << std::endl;
    tryFind(arr, 17);
    tryFind(arr, arr.at(rand() % 10));
    std::cout << std::endl << "Five arr" << std::endl;
    tryFind(arrFive, 0);
    tryFind(arrFive, 5);
    std::cout << std::endl << "Invalid arr" << std::endl;
    tryFind(invalArr, 17);
    return 0;
}
