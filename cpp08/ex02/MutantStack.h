// Copyright by decordel 2022

#ifndef __MUTANTSTACK_H__
# define __MUTANTSTACK_H__
# include <stack>

template <typename T, typename C = std::deque<T> >
class MutantStack : public std::stack<T, C> {

 public:
    typedef typename C::iterator  iterator;

    iterator begin() {
        return this->c.begin();

    };

    iterator end() {
        return this->c.end();
    };
};


#endif //__MUTANTSTACK_H__
