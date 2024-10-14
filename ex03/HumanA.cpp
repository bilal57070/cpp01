#include "HumanA.hpp"

humanA::~humanA(){
}

humanA::humanA(std::string name2, Weapon &weapon) : ai(weapon), _name(name2){

}

void   humanA::attack(){
    std::cout << this->_name << " attack with their " << ai.getType() << std::endl;
}