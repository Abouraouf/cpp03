#ifndef SCAVTRAP
#define SCAVTRAP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
	private:
		bool gate;
	public:
	ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap(std::string Name);
	~ScavTrap();
	
	ScavTrap& operator=(const ScavTrap& other);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void guardGate();
};

#endif