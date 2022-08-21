// Copyright by decordel 2022

#include "Array.h"
#include <ctime>

int main() {
    srand(time(NULL));

    Array<int> n = Array<int>();
    Array<int> b = Array<int>(15);

    try {
        n[0] = 55;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        for (int i = 0; i < 15; i++) {
            b[i] = rand() % 10;
        }
        for (int i = 0; i < 15; i++) {
            std::cout << b[i] << " ";
        }
        std::cout << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << "DONE" << std::endl;

    return 0;
}
