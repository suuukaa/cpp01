#include "Zombie.hpp"

int main(){

    int N = 7;

    Zombie *horde = zombieHorde(N, "bonbastic");
    if(horde)
    {
        for(int i = 0; i < N; i++){
            horde[i].announce();
        }
    }
    delete [] horde;
    return 0;
}