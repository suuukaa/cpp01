#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

    std::string name;
    Weapon &weapon;

    public :
        HumanA(const std::string n, Weapon &w);
        void attack();
};

#endif