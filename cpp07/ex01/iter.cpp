// Copyright by decordel 2022

#include "iter.hpp"
#include <iostream>

template <typename T>
void addOne(T& n) {
    n += 1;
}

template <typename T>
void printOne(T& n) {
        std::cout << n << " ";
}

int main() {
    int arr[3] = {1, 2, 3};
    char arr2[4] = {"HEL"};
    float arr3[3] = {1.3, 2.4, 3.5};


    ::iter(arr, 3, printOne);
    std::cout << std::endl;
    ::iter(arr2, 3, printOne);
    std::cout << std::endl;
    ::iter(arr3, 3, printOne);
    std::cout << std::endl;

    ::iter(arr, 3, addOne);
    ::iter(arr2, 3, addOne);
    ::iter(arr3, 3, addOne);

    ::iter(arr, 3, printOne);
    std::cout << std::endl;
    ::iter(arr2, 3, printOne);
    std::cout << std::endl;
    ::iter(arr3, 3, printOne);
    std::cout << std::endl;


}