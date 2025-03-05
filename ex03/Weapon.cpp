#include "Weapon.hpp"

void Weapon::set_type(std::string new_type){
    type = new_type;
}

const std::string& Weapon::get_type(){
    return type;
}

Weapon::Weapon(std::string type){
    this->type = type;
}

Weapon::~Weapon(){}