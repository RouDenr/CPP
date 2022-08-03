// Copyright by decordel 2022

#pragma once
#ifndef CPP_FIXED_H
# define CPP_FIXED_H
# include <iostream>

class Fixed {
 public:
    Fixed(void);
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed&);
    ~Fixed(void);

    Fixed& operator=(const Fixed&);

    int     getRawBite(void) const;
    void    setRawBite(int const);
    int     toInt(void) const;
    float   toFloat(void) const;



 private:
    int _value;
    static const int _bits = 8;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif //CPP_FIXED_H
