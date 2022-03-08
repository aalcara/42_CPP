#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap [unnamed] constructor called" << std::endl;
	this->_name = "unnamed";
	this->_hitpts = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap [" << name << "] constructor called" << std::endl;
	this->_name = name;
	this->_hitpts = 100;
	this->_energy = 50;
	this->_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &Obj) : ClapTrap(Obj)
{
	std::cout << "ScavTrao Copy constructor called" << std::endl;
	ScavTrap::operator=(Obj);
	return ;
}

ScavTrap &ScavTrap::operator= (ScavTrap const &Obj)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->_name = Obj._name;
	this->_hitpts = Obj._hitpts;
	this->_energy = Obj._energy;
	this->_damage = Obj._damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "SCAVTRAP [" << this->_name << "] attacks [" << target \
	<< "], causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy -= 1;
	return ;
}


void	ScavTrap::guardGate()
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "SCAVTRAP [" << this->_name << "] is now on Gate keeper mode." << std::endl;
		return ;
}

