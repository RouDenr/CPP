// Copyright by decordel 2022

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

template<typename T>
static void     swap(T& a, T& b) {
    T   temp = a;
    a = b;
    b = temp;
}

template<typename T>
static T        min(const T a, const T b) {
    return a < b ? a : b;
}

template<typename T>
static T        max(const T a, const T b) {
    return a > b ? a : b;
}


#endif //__WHATEVER_H__
