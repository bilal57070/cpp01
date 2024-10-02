#include "Zombie.hpp"
#include <string.h>

int main(void)
{
    Zombie *newone;
    Zombie zombie("bilal");

    zombie.announce();
    randomChump("bekhey");
    newone = newZombie("hmar");
    newone->announce();
    delete(newone);
}