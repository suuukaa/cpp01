#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
    std::string type;

    public :
        Weapon(std::string type);
        
        const std::string& get_type();
        void set_type(std::string new_type);
};

#endif