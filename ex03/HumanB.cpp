#include "HumanB.hpp"

humanB::~humanB(){
}

humanB::humanB(std::string name) : _name(name){

}

void    humanB::setWeapon(Weapon &aie){
    this->ayi = &aie;
}

void   humanB::attack(){
    std::cout << this->_name << " attack with their " << ayi->getType() << std::endl;
}