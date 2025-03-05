#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->weapon = nullptr;
}

void HumanB::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
}