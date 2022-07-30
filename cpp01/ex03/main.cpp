// Copyright 2022 decordel

#include "HumanA.hpp"
#include "HumanB.hpp"


int main(void) {
    {
        Weapon gun = Weapon("BFG");
        HumanA gosha("Gosha", gun);
        gosha.attack();
        gun.setType("ak47");
        gosha.attack();
    }
    {
        Weapon gun = Weapon("BFG");
        HumanB dmitry("Dmitry");
        dmitry.setWeapon(gun);
        dmitry.attack();
        gun.setType("ak47");
        dmitry.attack();
    }
    return 0;
}

