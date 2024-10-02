#include "Zombie.hpp"
#include <stdio.h>
#include <iostream>

void    Zombie::setZombie(std::string _name) {
    name = _name;
}

Zombie::Zombie(){
}

Zombie::~Zombie(){
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}