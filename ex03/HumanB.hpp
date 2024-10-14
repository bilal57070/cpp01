#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class humanB{
    private:
        Weapon *ayi;
        std::string _name;

    public:
        void attack();
        void setWeapon(Weapon &test);
        humanB(std::string _name);
        ~humanB();
};

#endif