// Copyright by decordel 2022

#include "Data.h"

int Data::_last_id = 0;

Data::Data() {
    this->_id = _last_id++;
}
Data::Data(const Data &data) {
    *this = data;
}

Data &Data::operator=(const Data &orig) {
    this->_id = orig._id;
    return *this;
}

int Data::getId() {
    return this->_id;
}

Data::~Data() {
}