#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap a("CL4P-TP");
    ScavTrap b("SC4V-TP");

    a.attack("Bandit");
    a.takeDamage(5);
    a.beRepaired(3);

    b.attack("Hyperion");
    b.takeDamage(90);
    b.beRepaired(50);
    b.guardGate();

    return 0;
}