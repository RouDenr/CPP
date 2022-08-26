// Copyright by decordel 2022

#include "Array.h"
#include <iostream>
#include <exception>

template <typename T>
Array<T>::Array() {
    _val = NULL;
    _size = 0;
}

template <typename T>
Array<T>::Array(const unsigned int &n) {
    _val = new T[n]();
    _size = n;
}

template <typename T>
Array<T>::Array(const Array<T> &orig) {
    this->_val = new T[orig._size]();
    for (unsigned i = 0; i < orig._size; i++) {
        this->_val[i] = orig._val[i];
    }
    this->_size = orig._size;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &orig) {
    if (this != &orig) {
        delete [] this->_val;

        this->_val = new T[orig._size]();
        for (unsigned i = 0; i < orig._size; i++) {
            this->_val[i] = orig._val[i];
        }
        this->_size = orig._size;
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const {
    return this->_size;
}

template <typename T>
T&      Array<T>::operator[](const unsigned int i) {
    if (i >= size())
        throw ArrayIndexError();
    return this->_val[i];
}

template <typename T>
const char *Array<T>::ArrayIndexError::what() const throw() {
    return "index is out of bounds";
}

template <typename T>
Array<T>::~Array<T>() {
    delete [] this->_val;
}

