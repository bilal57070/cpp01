#include "file.hpp"


int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string buf;
    std::string all;
    std::string end;

    if (ac != 4){
        std::cout << "no good args" << std::endl;
        return (1);
    }
    s1 = av[2];
    s2 = av[3];
    if (ac == 4)
    {
        std::ifstream myflu(av[1]);
        if (!myflu){
            std::cout << "file does not exist" << std::endl;
            return (1);
        }
        while (getline(myflu, buf)){
            all += buf + "\n";
            //std::cout << all;
        }
        std::size_t found;
        found = 0;
        while(found != std::string::npos){
            found = all.find(s1);
            if (found != std::string::npos)
            {
                all.erase(found, s1.size());
                all.insert(found, s2);
                found = found + s2.size();
                //std::cout << found;
            }
        }
        end = std::string(av[1]) + ".replace";
        std::ofstream other(end.c_str());
        other << all;
    }
    else
        std::cout << "the program take 3 arg" << std::endl;
}