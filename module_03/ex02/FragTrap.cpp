#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap [unnamed] constructor called" << std::endl;
	this->_name = "unnamed";
	this->_hitpts = 100;
	this->_energy = 100;
	this->_damage = 30;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap [" << name << "] constructor called" << std::endl;
	this->_name = name;
	this->_hitpts = 100;
	this->_energy = 100;
	this->_damage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &Obj) : ClapTrap(Obj)
{
	std::cout << "ScavTrao Copy constructor called" << std::endl;
	FragTrap::operator=(Obj);
	return ;
}

FragTrap &FragTrap::operator= (FragTrap const &Obj)
{
	std::cout << "FragTrap Assignation operator called" << std::endl;
	this->_name = Obj._name;
	this->_hitpts = Obj._hitpts;
	this->_energy = Obj._energy;
	this->_damage = Obj._damage;
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "[" << this->_name << "] HIGH FIVES GUYS!" << std::endl;
}