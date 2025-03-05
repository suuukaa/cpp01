#include "replace.hpp"

int main(int ac, char **av){
    if (ac != 4)
    {
        std::ifstream file(av[1]);
        if(file.fail())
            std::cout << "ooooh file isn't open" << std::endl;
        else{
            
        }
        return 0;
    }
    std::cout << "oooops wrong argument :) try again?" << std::endl;
}