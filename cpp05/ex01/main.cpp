// Copyright by decordel 2022

#include "Bureaucrat.h"
#include "Form.h"
#include <iostream>
#include <cstdlib>
#include <exception>

int main() {
    Bureaucrat averageSteve;
    Bureaucrat mike("Mike", 3);
    Form    averageForm;
    Form    coolForm("33094.43 m.o.", 5, 5);

    averageSteve.signForm(averageForm);
    averageSteve.signForm(coolForm);
    mike.signForm(coolForm);
    return 0;
}
