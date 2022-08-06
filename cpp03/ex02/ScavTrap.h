// Copyright by decordel 2022

#ifndef __SCAVTRAP_H__
# define __SCAVTRAP_H__
# include "ClapTrap.h"


class ScavTrap: public ClapTrap {
public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& orig);
    ~ScavTrap(void);

    ScavTrap& operator=(const ScavTrap&);

    void guardGate(void);
};

#endif //  __SCAVTRAP_H__
