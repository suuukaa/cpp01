#include "Zombie.hpp"

int main(){

    Zombie *test = newZombie("new");
    test->announce();
    delete test;
    randomChump("douda");
    return 0;
}
