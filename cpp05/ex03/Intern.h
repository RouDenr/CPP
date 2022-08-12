// Copyright by decordel 2022

#ifndef __INTERN_H__
# define __INTERN_H__
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"
# include <string>


class Intern {
 public:
    Intern();
    Intern(const Intern& orig);

    class FormNotExist : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    Intern& operator=(const Intern& orig);

    Form*  makeForm(std::string type_form, std::string target);
    ~Intern();

 private:
    int     _return_type_form_id(std::string key);
    enum {
        SHRUBBERY,
        ROBOTOMY,
        PARDON
    };
};


#endif //__INTERN_H__
