// Copyright 2022 decordel

#pragma once
#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__
# include <string>
# include "Weapon.hpp"

class HumanB {
 public:
    void            setWeapon(Weapon&);

    explicit        HumanB(std::string);
                    ~HumanB();

    void            attack(void);
 private:
    std::string     _name;
    Weapon*          _weapon;
};

#endif  // __HUMANB_HPP__

