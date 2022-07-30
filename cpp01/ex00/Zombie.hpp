// Copyright 2022 decordel

#pragma once
#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__
# include <string>
class Zombie {
 public:
                Zombie(void);
                ~Zombie(void);
    static Zombie*     newZombie(std::string name);
    static void        randomChump(std::string name);
    void        announce(void);

 private:
    void        _setName(std::string);
    std::string _name;
};

#endif  // __ZOMBIE_HPP__

