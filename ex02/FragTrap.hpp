#ifndef FRAGTRAP
#define FRAGTRAP
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
		bool gate;
	public:
	FragTrap();
	FragTrap(const FragTrap& other);
	FragTrap(std::string Name);
	~FragTrap();
	
	FragTrap& operator=(const FragTrap& other);
	
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void highFivesGuys(void);
};

#endif