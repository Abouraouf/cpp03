#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "\n=== CLAPTRAP TEST ===" << std::endl;
    ClapTrap clap("CLAP");
    clap.attack("enemy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n=== SCAVTRAP TEST ===" << std::endl;
    ScavTrap scav("SCAV");
    scav.attack("enemy1");
    scav.takeDamage(90);
    scav.beRepaired(50);
    scav.guardGate();

    std::cout << "\n=== FRAGTRAP TEST ===" << std::endl;
    FragTrap frag("FRAG");
    frag.attack("enemy");
    frag.takeDamage(70);
    frag.beRepaired(40);
    frag.highFivesGuys();

    std::cout << "\n=== END OF PROGRAM ===" << std::endl;
    return 0;
}
