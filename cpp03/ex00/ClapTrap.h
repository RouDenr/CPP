// Copyright by decordel 2022

#pragma once
#ifndef __CLAPTRAP__
# define __CLAPTRAP__
# include <string>

class ClapTrap {
 public:
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap&);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap&);

    std::string     getName(void);
    unsigned int    getAttackDamage(void);

    void    attack(const std::string target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

 private:
    std::string     _name;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;

    bool    isActive();
};


#endif //__CLAPTRAP__
