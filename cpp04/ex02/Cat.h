// Copyright by decordel 2022

#ifndef __CAT_H__
# define __CAT_H__
# include "Animal.h"
# define CAT_HELLO_MES "cat has come and waiting for food"
# define CAT_SOUND_MES "*meow* pet me and feed me already *mrr..*"
# define CAT_BYE_MES "cat is gone"

class Cat : public Animal {
public:
    int k;

    Cat();
    Cat(int k);
    Cat(const Cat& orig);
    ~Cat();

    Cat& operator=(const Cat& orig);

    void makeSound() const;
};


#endif //__CAT_H__
