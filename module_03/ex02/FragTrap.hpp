#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &Obj);
	FragTrap	&operator= (FragTrap const &Obj);

	void highFivesGuys(void);
};

#endif
