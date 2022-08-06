// Copyright by decordel 2022

#ifndef __FRAGTRAP_H__
# define __FRAGTRAP_H__
# include "ClapTrap.h"


class FragTrap : public ClapTrap {
 public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap& orig);
    ~FragTrap(void);

    FragTrap& operator=(const FragTrap&);

    void highFivesGuys(void);
};


#endif //__FRAGTRAP_H__
