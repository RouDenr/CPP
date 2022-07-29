// Copyright 2022 decordel

#include "Contact.hpp"

Contact::Contact() {
    this->name = "";
    this->lastname = "";
    this->nickname = "";
    this->phone = "";
    this->secret = "";
}

Contact::Contact(std::string name, std::string lastname,
            std::string phone, std::string secret) {
    this->name = name;
    this->lastname = lastname;
    this->phone = phone;
    this->secret = secret;
}

void Contact::set_name(std::string name) {
    this->name = name;
}

std::string    Contact::get_name() {
    return this->name;
}

void Contact::set_lastname(std::string lastname) {
    this->lastname = lastname;
}

std::string   Contact::get_lastname() {
    return this->lastname;
}

void Contact::set_nickname(std::string nickname) {
    this->nickname = nickname;
}

std::string   Contact::get_nickname() {
    return this->nickname;
}

void Contact::set_phone(std::string phone) {
    this->phone = phone;
}

std::string   Contact::get_phone() {
    return this->phone;
}

void Contact::set_secret(std::string secret) {
    this->secret = secret;
}

std::string   Contact::get_secret() {
    return this->secret;
}

Contact::~Contact() {
}
