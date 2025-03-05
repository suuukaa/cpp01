#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::setWeapon(Weapon &newWeapon){
   weapon = &newWeapon;
}

void HumanB::attack(){
    if(weapon)
        std::cout << this->name << " attacks with their " << weapon->get_type() << std::endl;
    else
        std::cout << "oh noo there is no weapon :)";
}