#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->Attack_points = 20;
	this->Energy_points = 50;
	this->Hit_points = 100;
	gate = 0;
	std::cout << "Parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap
& other) : ClapTrap(other)
{
	std::cout << "copy constructor called" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap
& other)
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

FragTrap::~FragTrap()
{
	std::cout << "Destructor called" << std::endl;
}

// actions in here 

void FragTrap::attack(const std::string& target)
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
    std::cout << "FragTrap" << Name << " attacks " << target
              << ", causing " << Attack_points << " points of damage!" << std::endl;
    Energy_points--;
}

void FragTrap::takeDamage(unsigned int amount)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << Name << " requests a positive high five!" << std::endl;
}