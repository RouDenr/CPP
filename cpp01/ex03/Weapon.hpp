// Copyright 2022 decordel

#pragma once
#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__
# include <string>

class Weapon
{
 public:
    std::string      getType(void);
    void             setType(std::string);

    explicit         Weapon(std::string);
                     ~Weapon(void);
 private:
    std::string      _type;
};

#endif  // __WEAPON_HPP__
