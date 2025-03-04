#include "Zombie.hpp"

void Zombie::announce(void){  
    std::cout << this->name << " : BraiiiiiiinnnzzzZ... \n";
}

void Zombie::set_name(std::string name){
    this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie(){
    std::cout << this->name << " : is maaat \n";
}

