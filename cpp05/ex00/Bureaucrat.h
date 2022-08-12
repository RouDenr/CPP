// Copyright by decordel 2022

#ifndef __BUREAUCRAT_H__
# define __BUREAUCRAT_H__
# include <string>
# include <exception>


class Bureaucrat {
 public:
    Bureaucrat();
    Bureaucrat(int grade);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat&);

    Bureaucrat&     operator=(const Bureaucrat&);

    std::string     getName() const;
    int             getGrade() const;

    class GradeTooLowException : public std::exception {
     public:
        virtual const char *what() const throw ();
    };
    class GradeTooHighException : public std::exception {
     public:
        virtual const char *what() const throw ();
    };

    ~Bureaucrat();
 private:
    std::string     _name;
    int            _grade;
};


#endif //__BUREAUCRAT_H__
