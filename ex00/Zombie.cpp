#include "Zombie.hpp"
#include <stdio.h>
#include <iostream>

Zombie::Zombie(std::string _name) {
    name = _name;
}

Zombie::~Zombie()
{
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}