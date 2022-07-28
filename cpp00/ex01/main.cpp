// Copyright 2022 decordel

#include <iostream>
#include "PhoneBook.hpp"

int main(int argc, char const *argv[]) {
    std::string in = "";
    (void) argv;

    if (argc != 1)
        return 1;
    PhoneBook book;
    while (!std::cin.eof() &&  in != "EXIT") {
        std::cout << "Input command: ";
        std::cin >> in;
        if (in == "ADD")
            book.add_contact();
        else if (in == "SEARCH")
            book.show_contacts();
    }
    return 0;
}

