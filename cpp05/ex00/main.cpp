// Copyright by decordel 2022

#include "Bureaucrat.h"
#include <iostream>
#include <cstdlib>
#include <exception>

int main(int argc, char **argv) {
    int grade;
    if (argc != 2)
        grade = 75;
    else
        grade = atoi(argv[1]);
    try {
        Bureaucrat steve("Jojo", grade);
        std::cout << steve.getName() << " have " << steve.getGrade()
                  << std::endl;
    } catch (const Bureaucrat::GradeTooLowException& e) {
        std::cout << e.what() << std::endl;
    } catch (const Bureaucrat::GradeTooHighException& e) {
        std::cout << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
