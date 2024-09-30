#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <string.h>

class Zombie {
private:
    std::string name;

public:
    void setname(void);
    void announce(void);

};

#endif