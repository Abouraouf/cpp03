#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>

class ClapTrap{
	private:
		std::string			Name;
		unsigned int 		Hit_points;
		unsigned int		Energy_points;
		unsigned int		Attack_points;
	public:
		ClapTrap();
		ClapTrap(const std::string& Name);
		ClapTrap(const ClapTrap& other);
		~ClapTrap();
		
		ClapTrap& operator=(const ClapTrap& other);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif