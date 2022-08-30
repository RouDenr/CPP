// Copyright by decordel 2022

#include "Span.h"
#include <iostream>
#include <vector>

int main() {
    Span* orig = new Span(5);
    Span *test = new Span();
    Span *test3 = new Span(6);

//    test->showAll();

    orig->addNumber(3);
    orig->addNumber(6);
    orig->addNumber(9);

    Span* test2 = new Span(*orig);

    orig->addNumber(17);
    orig->addNumber(11);

    int a[6] = { 2, 3, 4, 7, 10, 101};
    test3->addNumber(a, a + 6);
    test3->showAll();

    std::vector<int> v(a, a + 6);
    Span *test4 = new Span(6);
    test4->addNumber(v.begin(), v.end());
    test4->showAll();
    Span *invalid_test = new Span();

    *test = *orig;
    test->showAll();
    try {
        std::cout << "SP L_S - " << orig->longestSpan() << std::endl;
        std::cout << "SP INVALID - " << invalid_test->longestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    delete orig;
    delete invalid_test;
    try {
        std::cout << "TEST L_S - " << test->longestSpan() << std::endl;
        std::cout << "TEST S_S - " << test->shortestSpan() << std::endl;
        std::cout << "TEST2 L_S - " << test2->longestSpan() << std::endl;
        std::cout << "TEST2 S_S - " << test2->shortestSpan() << std::endl;
        std::cout << "TEST3 L_S - " << test3->longestSpan() << std::endl;
        std::cout << "TEST3 S_S - " << test3->shortestSpan() << std::endl;
    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    delete test;
    delete test2;
    return 0;
}