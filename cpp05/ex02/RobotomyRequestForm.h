// Copyright by decordel 2022

#ifndef __ROBOTOMYREQUESTFORM_H__
# define __ROBOTOMYREQUESTFORM_H__
# include "Form.h"


class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm();
    explicit RobotomyRequestForm(std::string target);
    RobotomyRequestForm(RobotomyRequestForm const& orig);

    RobotomyRequestForm&  operator=(RobotomyRequestForm& orig);

    virtual void execute(const Bureaucrat &executor);

    ~RobotomyRequestForm();
};


#endif //__ROBOTOMYREQUESTFORM_H__
