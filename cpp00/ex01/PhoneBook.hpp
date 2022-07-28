// Copyright 2022 decordel

#pragma once
#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__
# ifndef N_CONTACTS
#  define N_CONTACTS 8
# endif
# ifndef N_SIZE_COL
#  define N_SIZE_COL 10
# endif
# include <string>
# include <sstream>
# include "Contact.hpp"

class PhoneBook {
 private:
    Contact    contacts[N_CONTACTS];

    void           print_collum(std::string);
    void           print_contact_line(int);
    void           print_contact_info(int, int);
    void           sort_contacts();
    std::string    read_collum(std::string);
 public:
    PhoneBook();
    void    add_contact();
    void    show_contacts();
    ~PhoneBook();
};

#endif  // __PHONEBOOK_HPP__
