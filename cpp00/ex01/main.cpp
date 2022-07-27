// Copyright 2022 decordel

#include <iostream>
#include "PhoneBook.hpp"

int main(int argc, char const *argv[]) {
    std::string in = "";
    (void) argv;

    if (argc != 1)
        return 1;
    PhoneBook book;
    while (!std::cin.eof() &&  in != "E") {
        std::cout << "Введите команду: ";
        std::cin >> in;
        if (in == "A")
            book.add_contact();
        else if (in == "S")
            book.show_contacts();
    }
    return 0;
}

