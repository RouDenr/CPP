// Copyright by decordel 2022

#include "Data.h"
#include <iostream>


uintptr_t   serialize(Data *ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}
Data*       deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main(void) {
    Data* data = new Data();
    uintptr_t uintptr;

    std::cout << data->getId() << std::endl;
    std::cout << data << std::endl << std::endl;

    uintptr = serialize(data);
    std::cout << uintptr << std::endl;
    std::cout << &uintptr << std::endl << std::endl;

    data = deserialize(uintptr);
    std::cout << data->getId() << std::endl;
    std::cout << data << std::endl;

    delete data;
    return 0;
}