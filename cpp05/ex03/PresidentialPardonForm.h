// Copyright by decordel 2022

#ifndef __PRESIDENTIALPARDONFORM_H__
# define __PRESIDENTIALPARDONFORM_H__
# include "Form.h"


class PresidentialPardonForm : public Form{
public:
    PresidentialPardonForm();
    explicit PresidentialPardonForm(std::string target);
    PresidentialPardonForm(PresidentialPardonForm const& orig);

    PresidentialPardonForm&  operator=(PresidentialPardonForm& orig);

    virtual void execute(const Bureaucrat &executor);

    ~PresidentialPardonForm();
};


#endif //__PRESIDENTIALPARDONFORM_H__
