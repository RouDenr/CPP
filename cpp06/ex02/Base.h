// Copyright by decordel 2022
#ifndef __BASE_H__
#define __BASE_H__


class Base {
 public:
    virtual ~Base();
};

class A : public Base {

};
class B : public Base {

};
class C : public Base {

};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);


#endif //__BASE_H__
