// Copyright by decordel 2022

#pragma once
#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <string>
# include <exception>
# include "Form.h"

class Form;

class Bureaucrat {
 public:
    Bureaucrat();
    explicit Bureaucrat(int grade);
    Bureaucrat(const std::string& name, int grade);
    Bureaucrat(const Bureaucrat&);

    Bureaucrat&     operator=(const Bureaucrat&);

    std::string     getName() const;
    int             getGrade() const;

    class GradeTooLowException : public std::exception {
     public:
        virtual const char *what() const throw();
    };
    class GradeTooHighException : public std::exception {
     public:
        virtual const char *what() const throw();
    };

    void    signForm(Form& form)    const;
    void    executeForm(Form& form) const;

    ~Bureaucrat();
 private:
    std::string     _name;
    int               _grade;
};


#endif //__BUREAUCRAT_H__
