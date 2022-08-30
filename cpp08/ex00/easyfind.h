// Copyright by decordel 2022

#ifndef __EASYFIND_H__
# define __EASYFIND_H__
# include <algorithm>

//typename T::iterator

class NotFindError : public std::exception {
public:
    virtual const char *what() const throw () {
        return "num not find";
    }
};

template <typename T>
typename T::iterator easyfind(T &arr, int n) {
    if (arr.size() != 0 && *arr.begin() == n)
        return arr.begin();

    typename T::iterator find = std::find(arr.begin(),
                                          arr.end(), n);
    if (*find != n)
        throw NotFindError();
    return find;
}

#endif //__EASYFIND_H__
