#include "Weapon.hpp"

Weapon::~Weapon(){
}

Weapon::Weapon(std::string type2) : type(type2){
}

const std::string Weapon::getType(){
    return (type);
}

void    Weapon::setType(const std::string test2){
    this->type = test2;
}

