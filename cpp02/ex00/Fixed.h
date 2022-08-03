// Created by Dennet Cordelia on 03.08.2022.

#pragma once
#ifndef CPP_FIXED_H
# define CPP_FIXED_H

class Fixed {
 public:
    Fixed(void);
    Fixed(const Fixed&);
    ~Fixed(void);

    Fixed& operator=(const Fixed&);

    int     getRawBite(void) const;
    void    setRawBite(int const);

 private:
    int _value;
    static const int _bits = 8;
};


#endif //CPP_FIXED_H
