#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class humanA{
    private:
        Weapon ai;
        std::string name;
    
    public:
        humanA(std::string _name, Weapon(std::string name));
        ~humanA();
        void attack();
};

#endif