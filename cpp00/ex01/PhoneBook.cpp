// Copyright 2022 decordel

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(/* args */) {
}

std::string    PhoneBook::read_collum(std::string col) {
    std::string tmp = "";

    std::cout << "input " << col << ": ";
    while (!std::cin.eof() && tmp.length() == 0)
        std::cin >> tmp;
    return tmp;
}

void    PhoneBook::sort_contacts() {
    int i = N_CONTACTS - 1;

    while (i >= 0) {
        Contact tmp = this->contacts[i];
        this->contacts[i] = this->contacts[N_CONTACTS - 1];
        this->contacts[N_CONTACTS - 1] = tmp;
        i--;
    }
}

void    PhoneBook::add_contact() {
    int         i = 0;

    while (i < N_CONTACTS && this->contacts[i].get_name().length() != 0)
        i++;
    if (i == N_CONTACTS) {
        sort_contacts();
        i = N_CONTACTS - 1;
    }
    if (!std::cin.eof())
        this->contacts[i].set_name(read_collum("name"));
    if (!std::cin.eof())
        this->contacts[i].set_lastname(read_collum("lastname"));
    if (!std::cin.eof())
        this->contacts[i].set_nickname(read_collum("nickname"));
    if (!std::cin.eof())
        this->contacts[i].set_phone(read_collum("phone"));
    if (!std::cin.eof())
        this->contacts[i].set_secret(read_collum("secret"));
}

void    PhoneBook::print_collum(std::string col) {
    int i = 0;

    while (col.length() + i < N_SIZE_COL) {
        std::cout << " ";
        i++;
    }
    i = 0;
    while (i < N_SIZE_COL && col[i]) {
        if (i == N_SIZE_COL - 1 && col[i] != 0 && col[i + 1] != 0)
            std::cout << ".";
        else
            std::cout << col[i];
        i++;
    }
    std::cout << "|";
}

void    PhoneBook::print_contact_info(int n, int max) {
    if (n >= 0 && n < N_CONTACTS && n < max) {
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                  << std::endl;
        std::cout << "id: " << n << std::endl;
        std::cout << "name: " << this->contacts[n].get_name() << std::endl;
        std::cout << "lastname: " << this->contacts[n].get_lastname()
                  << std::endl;
        std::cout << "nickname: " << this->contacts[n].get_nickname()
                  << std::endl;
        std::cout << "phone: " << this->contacts[n].get_phone() << std::endl;
        std::cout << "secret: " << this->contacts[n].get_secret() << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    } else if (!std::cin.eof()) {
        std::cout << "the index is out of range";
    }
    std::cout << std::endl;
}

void    PhoneBook::print_contact_line(int n) {
    std::stringstream   ss;
    std::string         tmp;

    ss << n;
    ss >> tmp;
    std::cout << "|";
    print_collum(tmp);
    print_collum(this->contacts[n].get_name());
    print_collum(this->contacts[n].get_lastname());
    print_collum(this->contacts[n].get_nickname());
    std::cout << std::endl;
}

void    PhoneBook::show_contacts() {
    int         i = 0;
    std::string line;
    int         n = -1;

    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|    id    |   name   | lastname | nickname |" << std::endl;
    while (i < N_CONTACTS && this->contacts[i].get_name().length() != 0) {
        std::cout << "---------------------------------------------"
                << std::endl;
        print_contact_line(i);
        i++;
    }
    std::cout << "---------------------------------------------"
                << std::endl;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        if (ss >> n)
            break;
        else
            std::cout << "input id: ";
    }
    print_contact_info(n, i);
}

PhoneBook::~PhoneBook() {
}
