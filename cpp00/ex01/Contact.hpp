// Copyright 2022 decordel
#ifndef CONTACT_HPP_
# define CONTACT_HPP_
# include <iostream>
# include <string>

class Contact {
 private:
    std::string   name;
    std::string   lastname;
    std::string   nickname;
    std::string   phone;
    std::string   secret;
 public:
    Contact();
    Contact(std::string name, std::string lastname,
            std::string phone, std::string secret);
    void          set_name(std::string name);
    std::string   get_name();
    void          set_lastname(std::string lastname);
    std::string   get_lastname();
    void          set_nickname(std::string nickname);
    std::string   get_nickname();
    void          set_phone(std::string phone);
    std::string   get_phone();
    void          set_secret(std::string secret);
    std::string   get_secret();
    ~Contact();
};

#endif  // CONTACT_HPP_
