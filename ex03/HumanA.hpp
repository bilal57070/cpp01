#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class humanA{
    private:
        Weapon &ai;
        std::string _name;
    
    public:
        humanA(std::string _name, Weapon &weapon);
        ~humanA();
        void attack();
};

#endif