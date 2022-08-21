// Copyright by decordel 2022

#ifndef __ITER_H__
# define __ITER_H__
# include <cstdlib>

template <typename T>
void    iter(T* arr, size_t len, void (*f)(T&)) {
    for (size_t i = 0; i < len; i++) {
        f(arr[i]);
    }
}



#endif //__ITER_H__
