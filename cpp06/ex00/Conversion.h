// Copyright by decordel 2022

#ifndef __CONVERSION_H__
#define __CONVERSION_H__
#include <string>


class Conversion {
 public:
    Conversion(const std::string& arg);
    Conversion(Conversion& orig);

    template <typename T>
    T min(){

    };


    Conversion&     operator=(Conversion& orig);

    static int      toInt(const std::string& arg);
    static float    toFloat(const std::string& arg);
    static double   toDouble(const std::string& arg);
    static char     toChar(const std::string& arg);

    ~Conversion();

 private:
    void _intConstructor(int arg);
    void _floatConstructor(float arg);
    void _doubleConstructor(double arg);
    void _charConstructor(char arg);
    static bool _argBoolIter(const std::string& arg, int (*f)(int));
    std::string     _arg;
    int             _integer;
    float           _float;
    double          _double;
    char            _char;
};


#endif //__CONVERSION_H__
