#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << this->name << " attacks with their " << this->weapon.get_type() << std::endl;
}

HumanA::HumanA(const std::string n, Weapon &w): weapon(w){
    this->name = n;
}

HumanA::~HumanA(){}