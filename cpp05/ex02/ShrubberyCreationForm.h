// Copyright by decordel 2022

#ifndef __SHRUBBERYCREATIONFORM_H__
# define __SHRUBBERYCREATIONFORM_H__
# include "Form.h"
# include "TreeForm.h"


class ShrubberyCreationForm : public Form {
 public:
    ShrubberyCreationForm();
    explicit ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(ShrubberyCreationForm const& orig);

    ShrubberyCreationForm&  operator=(ShrubberyCreationForm& orig);

    virtual void execute(const Bureaucrat &executor);

    ~ShrubberyCreationForm();
};


#endif //  __SHRUBBERYCREATIONFORM_H__
