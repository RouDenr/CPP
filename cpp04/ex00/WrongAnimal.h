// Copyright by decordel 2022

#ifndef __WRONG_ANIMAL_H__
# define __WRONG_ANIMAL_H__
# define WHELLO_MES "WrongAnimal was born!"
# define WBYE_MES "WrongAnimal say goodbye!"
# define WSOUND_MES "*WrongAnimal sounds*"
# include <string>

class WrongAnimal {
 public:
    WrongAnimal();
    WrongAnimal(std::string type);
    WrongAnimal(const WrongAnimal& orig);
    ~WrongAnimal();

    WrongAnimal& operator=(const WrongAnimal& orig);

    std::string     getType() const;
    void    makeSound() const;

 protected:
    std::string type;
};


#endif //__WRONG_ANIMAL_H__
