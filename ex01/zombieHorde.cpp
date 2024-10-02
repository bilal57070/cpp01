#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name){
    int i = -1;
    Zombie *horde;
    horde = new Zombie[N];
    while (++i < N)
        horde[i].setZombie(name);
    return horde;
}