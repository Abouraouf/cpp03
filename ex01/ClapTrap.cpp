#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	Name = "????";
	Attack_points = 0;
	Energy_points = 10;
	Hit_points = 10;
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), Hit_points(10), Energy_points(10), Attack_points(0)
{
	std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		Name = other.Name;
		Attack_points = other.Attack_points;
		Energy_points = other.Energy_points;
		Hit_points = other.Hit_points;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

// actions in here 

void ClapTrap::attack(const std::string& target)
{
    if (Hit_points == 0)
    {
        std::cout << Name << " has no hit points left and cannot attack." << std::endl;
        return;
    }
    if (Energy_points == 0)
    {
        std::cout << Name << " has no energy points left and cannot attack." << std::endl;
        return;
    }

    std::cout << "ClapTrap " << Name << " attacks " << target
              << ", causing " << Attack_points << " points of damage!" << std::endl;
    Energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (Hit_points == 0)
    {
        std::cout << Name << " already has 0 hit points." << std::endl;
        return;
    }

    std::cout << Name << " takes " << amount << " points of damage!" << std::endl;
    if (amount >= Hit_points)
        Hit_points = 0;
    else
        Hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (Hit_points == 0)
    {
        std::cout << Name << " cannot be repaired because it has 0 hit points." << std::endl;
        return;
    }
    if (Energy_points == 0)
    {
        std::cout << Name << " has no energy points left and cannot repair." << std::endl;
        return;
    }

    Hit_points += amount;
    Energy_points--;
    std::cout << Name << " repairs itself, gaining " << amount << " hit points!" << std::endl;
}
