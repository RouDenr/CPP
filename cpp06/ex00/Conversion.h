// Copyright by decordel 2022

#ifndef __CONVERSION_H__
#define __CONVERSION_H__
#include <string>


class Conversion {
 public:
    Conversion();
    Conversion(const int arg);
    Conversion(const char arg);
    Conversion(const float arg);
    Conversion(const double arg);
    Conversion(Conversion& orig);


    Conversion&     operator=(const Conversion& orig);

    static int      toInt(const std::string& arg);
    static float    toFloat(const std::string& arg);
    static double   toDouble(const std::string& arg);
    static char     toChar(const std::string& arg);

    std::string intToString() const;
    std::string floatToString() const;
    std::string doubleToString() const;
    std::string charToString() const;

    ~Conversion();

 private:
    void _intConstructor(int arg);
    void _floatConstructor(float arg);
    void _doubleConstructor(double arg);
    void _charConstructor(char arg);
    void _errConstructor();

    static int _argCountIter(const std::string& arg, int (*f)(int));


    struct           _s_integer {
        int value;
        int flag;
    };
    struct           _s_float {
        float   value;
        int     flag;
    };
    struct           _s_double {
        double  value;
        int     flag;
    };
    struct           _s_char {
        char    value;
        int     flag;
    };

    enum {
        OK,
        IMPOSSIBLE,
        NAN,
        INF_PLUS,
        INF_MINUS
    };

//    std::string     _arg;
    struct _s_char      _char;
    struct _s_integer   _int;
    struct _s_float     _float;
    struct _s_double    _double;
};


#endif //__CONVERSION_H__
