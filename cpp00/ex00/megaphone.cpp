// Copyright 2022 decordel

#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    } else {
        for (size_t i = 1; argv[i]; i++) {
        std::string mess = argv[i];
            for (size_t j = 0; j < mess.length(); j++) {
                std::cout << (char)(std::toupper(mess[j]));
            }
        }
    }
    std::cout << std::endl;
    return (0);
}
