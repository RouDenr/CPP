// Copyright 2022 decordel

#pragma once
#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__
# include <string>
# include "Weapon.hpp"

class HumanA {
 public:
    void            setWeapon(Weapon);

                    HumanA(std::string, Weapon&);
                    ~HumanA();

    void            attack(void);
 private:
    std::string     _name;
    Weapon&          _weapon;
};

#endif  // __HUMANA_HPP__

