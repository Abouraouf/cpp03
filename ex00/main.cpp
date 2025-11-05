#include "ClapTrap.hpp"

int main()
{
    ClapTrap mahdi("mahdi");
    mahdi.attack("target1");
    mahdi.takeDamage(5);
    mahdi.beRepaired(3);
    mahdi.takeDamage(10);
    mahdi.attack("target2");
    mahdi.beRepaired(2);

    return 0;
}
