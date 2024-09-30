#include "Zombie.hpp"
#include <stdio.h>
#include <iostream>

void    Zombie::setname(void)
{
    name = "bilal";
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}