#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>

class Weapon{
    private:
        std::string type;
    
    public:
        Weapon(std::string name);
        ~Weapon();
        const std::string getType();
        void  setType(const std::string test);
};

#endif