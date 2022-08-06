// Copyright by decordel 2022

#ifndef __SCAVTRAP__
# define __SCAVTRAP__
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


#endif //__SCAVTRAP__
