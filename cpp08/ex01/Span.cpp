// Copyright by decordel 2022

#include "Span.h"
#include <exception>
#include <iostream>

Span::Span() {
    this->_nums = NULL;
    this->_size = 0;
    this->_count = 0;
}
Span::Span(unsigned int n) {
    this->_nums = new int[n];
    this->_size = n;
    this->_count = 0;
}
Span::Span(const Span &orig) : _size(orig._size), _count(orig._count) {
    this->_nums = new int[orig._size];
    if (orig._count != 0)
        std::copy(orig.begin(), orig.end(), this->_nums);
}

Span &Span::operator=(const Span &orig) {
    if (this != &orig) {
        delete [] this->_nums;
        this->_nums = new int[orig._size];
        std::copy(orig.begin(), orig.end(), this->_nums);
        this->_size = orig._size;
        this->_count = orig._count;
    }
    return *this;
}

void Span::addNumber(int num) {
    if (this->_count != this->_size) {
        this->_nums[this->_count] = num;
        this->_count++;
    } else {
        throw std::out_of_range("out of range to add");
    }
}

unsigned Span::shortestSpan() const {
    if (this->_count == 0)
        throw std::out_of_range("out of range to shortest span");
    int *min = std::min_element(begin(), end());
    int temp = *min;
    *min = *std::max_element(begin(), end());
    int result = *std::min_element(begin(), end()) - temp;
    *min = temp;
    return result;
}

unsigned Span::longestSpan() const {
    if (this->_count == 0)
        throw std::out_of_range("out of range to longest span");
    return *std::max_element(begin(), end()) -
                *std::min_element(begin(), end()) ;
}

void Span::showAll() const {
    std::cout << "{ ";
    for (iterator i = begin();  i != end(); i++) {
        std::cout << *i << ", ";
    }
    std::cout << "} " << std::endl;
}

Span::iterator Span::begin() const{
    return this->_nums;
}
Span::iterator Span::end() const{
    return this->_nums + this->_count;
}

Span::~Span() {
    delete [] this->_nums;
}