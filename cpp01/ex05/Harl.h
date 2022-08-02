// Copyright 2022 decordel

#pragma once
#ifndef CPP_HARL_H
# define CPP_HARL_H
# include <string>


class Harl {
 public:
    Harl(void);
    ~Harl(void);
    void    complain(std::string);

 private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void (Harl::*ptiptrde) ();
};

#endif //CPP_HARL_H
