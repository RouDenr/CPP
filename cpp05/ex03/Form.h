// Copyright by decordel 2022

#pragma once
#ifndef __FORM_H__
# define __FORM_H__
# include "Bureaucrat.h"
# include <string>
# include <exception>

class Bureaucrat;

class Form {
 public:
    Form();
    Form(const std::string& target);
    Form(const std::string& name, int grade_need_to_sign, int grade_need_to_exec);
    Form(const Form& orig);

    Form&   operator=(const Form& orig);

    bool    isSign()                            const;
    bool    checkRequiredToSign(int grade)      const;
    bool    checkToExecute(int grade)           const;
    std::string getName()                       const;
    int         getGradeSign()                  const;
    int         getGradeExec()                  const;

    class GradeTooHighException : public std::exception {
     public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
     public:
        virtual const char *what() const throw();
    };
    class FormNotSign : public std::exception {
    public:
        virtual const char *what() const throw();
    };

    void            beSigned(const Bureaucrat& bureaucrat);
    virtual void    execute(const Bureaucrat& executor) = 0;

    virtual ~Form();

 protected:
    std::string     target;
    void            setSigned(bool sing);

 private:
    const std::string       _name;
    bool                    _signed;
    const int               _needGradeSign;
    const int               _needGradeExecute;
};


#endif //__FORM_H__
