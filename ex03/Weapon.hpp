#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
    std::string type;

    public :
        const std::string get_type();
        void set_type(std::string type);
};

#endif