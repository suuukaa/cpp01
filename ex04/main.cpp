#include <iostream>
#include <string>
#include <fstream>

void print_error(std::string s){
    std::cout << s << std::endl;
}

int main(int ac, char **av){
    if (ac == 4)
    {
        std::ifstream file(av[1]);
        if(file.fail()){
            print_error("ooooh infile isn't open");
            return 1;
        }
        
        std::string s1 = av[2];
        if(s1.empty()){
            print_error("oooops s1 is empty");
            return 1;
        }
        std::string s2 = av[3];

        std::string filename = std::string(av[1]) + ".replace";
        std::ofstream outfile(filename.c_str());
        if(outfile.fail()){
            print_error("ooooh outfile isn't open");
            return 1;
        }
        
        std::string str;
        while(std::getline(file, str)){
            std::string new_str;
            size_t current_pos = 0, last_pos = 0;
            while((current_pos = str.find(s1, last_pos)) != std::string::npos){
                new_str += str.substr(last_pos, current_pos - last_pos);
                new_str += s2;
                last_pos = current_pos + s1.length();
            }
            new_str += str.substr(last_pos);
            outfile << new_str << std::endl;
        }
        return 0;
    }
    std::cout << "oooops wrong argument :) try again?" << std::endl;
    return 1;
}
