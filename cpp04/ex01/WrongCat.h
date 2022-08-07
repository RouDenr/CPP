// Copyright by decordel 2022

#ifndef __WRONG_CAT_H__
# define __WRONG_CAT_H__
# include "WrongAnimal.h"
# define CAT_HELLO_MES "cat has come and waiting for food"
# define CAT_SOUND_MES "*meow* pet me and feed me already *mrr..*"
# define CAT_BYE_MES "cat is gone"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
    WrongCat(const WrongCat& orig);
    ~WrongCat();

    WrongCat& operator=(const WrongCat& orig);

    void makeSound() const;
};


#endif //__WRONG_CAT_H__
