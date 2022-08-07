// Copyright by decordel 2022

#ifndef __DOG_H__
# define __DOG_H__
# include "Animal.h"
# define DOG_HELLO_MES "dog came and is happy to see you"
# define DOG_SOUND_MES "*WOOF* I'm so glad that you exist, let's go for a walk \
*WOOF*"
# define DOG_BYE_MES "dog is sad to say goodbye to you, but he leaves"

class Dog : public Animal {
 public:
    Dog();
    Dog(const Dog& orig);
    ~Dog();

    Dog& operator=(const Dog& orig);

    void makeSound() const;
};


#endif //__DOG_H__
