#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
    Zombie *nzombie;

    nzombie = new Zombie(name);
    return nzombie;
}