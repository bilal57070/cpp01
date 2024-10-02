#include "Zombie.hpp"

int main()
{
    int i = 5;
    int r = 0;
    Zombie *horde;

    horde = zombieHorde(i, "chef");
    while (r < i)
    {
        horde[r].announce();
        r++;
    }
    delete [] horde;
}