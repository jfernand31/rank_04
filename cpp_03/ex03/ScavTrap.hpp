#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class ScavTrap: public ClapTrap
{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void	guardGate();
	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amoun);
};

#endif

