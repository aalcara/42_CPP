/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:52:23 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/08 17:59:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int	ScavTrap::_start_hitpts = 100;
unsigned int	ScavTrap::_start_energy = 50;
unsigned int	ScavTrap::_start_damage = 20;

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap [unnamed] constructor called" << std::endl;
	this->_name = "unnamed";
	this->_hitpts = ScavTrap::_start_hitpts;
	this->_energy = ScavTrap::_start_energy;
	this->_damage = ScavTrap::_start_damage;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap [" << name << "] constructor called" << std::endl;
	this->_name = name;
	this->_hitpts = ScavTrap::_start_hitpts;
	this->_energy = ScavTrap::_start_energy;
	this->_damage = ScavTrap::_start_damage;
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
	std::cout << "ScavTrap [" << this->_name << "] attacks [" << target \
	<< "], causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy -= 1;
	return ;
}


void	ScavTrap::guardGate()
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "ScavTrap [" << this->_name << "] is now on Gate keeper mode." << std::endl;
		return ;
}

