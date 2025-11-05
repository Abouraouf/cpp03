#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n=== CLAPTRAP TEST ===" << std::endl;
    ClapTrap clap("CL4P-TP");
    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== SCAVTRAP TEST ===" << std::endl;
    ScavTrap scav("SC4V-TP");
    scav.attack("Hyperion");
    scav.takeDamage(90);
    scav.beRepaired(50);
    scav.guardGate();

    std::cout << "\n=== FRAGTRAP TEST ===" << std::endl;
    FragTrap frag("FR4G-TP");
    frag.attack("Skrillex");
    frag.takeDamage(70);
    frag.beRepaired(40);
    frag.highFivesGuys();

    std::cout << "\n=== END OF PROGRAM ===" << std::endl;
    return 0;
}
