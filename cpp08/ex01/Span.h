// Copyright by decordel 2022

#ifndef __SPAN_H__
# define __SPAN_H__
# include <algorithm>


class Span {
 public:
                Span();
    explicit    Span(unsigned n);
                Span(const Span& orig);

    Span    &operator=(const Span& orig);

    typedef int * iterator;
    void addNumber(int num);

    template<class Iterator>
    void addNumber(Iterator begin, Iterator end) {
        while (begin != end) {
            this->addNumber(*begin);
            begin++;
        }
    }

    unsigned shortestSpan() const;
    unsigned longestSpan() const;

    void showAll() const;

    iterator begin() const;
    iterator end() const;


    ~Span();
 private:
    int         *_nums;
    unsigned    _size;
    unsigned    _count;
};


#endif //__SPAN_H__
