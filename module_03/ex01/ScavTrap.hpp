#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: public ClapTrap
{
private:

public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(const std::string name);
	ScavTrap(const ScavTrap &Obj);
	ScavTrap	&operator= (ScavTrap const &Obj);

	void	attack(const std::string& target);
	void	guardGate();

};

#endif
