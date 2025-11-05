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
	ScavTrap(const std::string& Name);
	~ScavTrap();
	
	ScavTrap& operator=(const ScavTrap& other);
	
	void attack(const std::string& target);
	void guardGate();
};

#endif