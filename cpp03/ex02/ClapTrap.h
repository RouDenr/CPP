// Copyright by decordel 2022

#pragma once
#ifndef __CLAPTRAP_H__
# define __CLAPTRAP_H__
# include <string>

class ClapTrap {
 public:
    ClapTrap(void);
    ClapTrap(std::string name);

    ClapTrap(const ClapTrap&);
    ~ClapTrap();

    ClapTrap& operator=(const ClapTrap&);

    std::string     getName(void) const;
    std::string     getType(void);
    unsigned int    getAttackDamage(void);

    void    attack(const std::string target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

 protected:
    ClapTrap(std::string, std::string, unsigned int,
             unsigned int, unsigned int);

 private:
    std::string     _name;
    std::string     _type;
    unsigned int    _hit_points;
    unsigned int    _energy_points;
    unsigned int    _attack_damage;

    bool    isActive();
};


#endif //  __CLAPTRAP_H__
