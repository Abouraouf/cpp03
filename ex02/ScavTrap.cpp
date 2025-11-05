#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->Attack_points = 20;
	this->Energy_points = 50;
	this->Hit_points = 100;
	gate = 0;
	std::cout << "Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called" << std::endl;
}

// actions in here 

void ScavTrap::attack(const std::string& target)
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
    std::cout << "ScavTrap " << Name << " attacks " << target
              << ", causing " << Attack_points << " points of damage!" << std::endl;
    Energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::beRepaired(unsigned int amount)
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

void ScavTrap::guardGate()
{
	std::cout << "t ScavTrap is now in Gate keeper mode." << std::endl;
	gate = 1;
}