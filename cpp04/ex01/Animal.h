// Copyright by decordel 2022

#ifndef __ANIMAL_H__
# define __ANIMAL_H__
# define HELLO_MES "Animal was born!"
# define BYE_MES "Animal say goodbye!"
# define SOUND_MES "*Animal sounds*"
# include <string>
# include "Brain.h"

class Animal {
 public:
    Animal();
    Animal(std::string type);
    Animal(const Animal& orig);
    virtual ~Animal();

    Animal& operator=(const Animal& orig);

    std::string     getType() const;
    Brain*          getBrain() const;
    std::string     getIdea() const;
    virtual void    makeSound() const;

 protected:
    std::string type;
 private:
    Brain*  _brain;
};


#endif //__ANIMAL_H__
