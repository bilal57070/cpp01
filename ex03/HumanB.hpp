#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class humanB{
    private:
        Weapon ayi;
        std::string name;

    public:
        void attack();
        humanB(std::string _name);
        ~humanB();
};

#endif