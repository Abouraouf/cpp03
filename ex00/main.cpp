#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("mahdi");
    a.attack("target1");
    a.takeDamage(5);
    a.beRepaired(3);
    a.takeDamage(10);
    a.attack("target2");
    a.beRepaired(2);

    return 0;
}
