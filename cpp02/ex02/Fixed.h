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

    //  assignment operators
    Fixed& operator=(const Fixed&);
    Fixed& operator++(void);
    Fixed  operator++(int);
    Fixed& operator--(void);
    Fixed  operator--(int);


    //  comparison operators
     bool operator>(const Fixed&);
     bool operator>=(const Fixed&);
     bool operator<(const Fixed&);
     bool operator<=(const Fixed&);
     bool operator==(const Fixed&);
     bool operator!=(const Fixed&);


    //  arithmetic operators
    Fixed operator+(const Fixed&);
    Fixed operator-(const Fixed&);
    Fixed operator*(const Fixed&);
    Fixed operator/(const Fixed&);

    friend std::ostream& operator<<(std::ostream&, const Fixed&);

    int     getRawBite(void) const;
    void    setRawBite(int const);
    int     toInt(void) const;
    float   toFloat(void) const;

    static Fixed    min(const Fixed&, const Fixed&);
    static Fixed    min(Fixed&, Fixed&);
    static Fixed    max(const Fixed&, const Fixed&);
    static Fixed    max(Fixed&, Fixed&);

 private:
    int _value;
    static const int _bits = 8;
};

#endif //CPP_FIXED_H
