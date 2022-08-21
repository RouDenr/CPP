// Copyright by decordel 2022

#ifndef __ARRAY_H__
# define __ARRAY_H__
# include <exception>

template <typename T>
class Array {
 public:
    Array();
    Array(const unsigned int& n);
    Array(const Array& orig);
    Array&  operator=(const Array& orig);

    unsigned size() const;
    T&  operator[](const unsigned i);

    class ArrayIndexError : public std::exception {
    public:
        virtual const char *what() const throw ();
    };

    ~Array();

 private:
    unsigned _size;
    T*  _val;
};


# include "Array.tpp"
#endif //__ARRAY_H__
