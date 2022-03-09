/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:23:06 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/08 12:20:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(): _name("unnamed"), _hitpts(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap [unnamed] constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const std::string name): _name(name), _hitpts(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap [" << name << "] constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &Obj)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	ClapTrap::operator=(Obj);
	return ;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &Obj)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = Obj._name;
	this->_hitpts = Obj._hitpts;
	this->_energy = Obj._energy;
	this->_damage = Obj._damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "ClapTrap [" << this->_name << "] attacks [" << target \
	<< "], causing " << this->_damage << " points of damage!" << std::endl;
	this->_energy -= 1;
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap [" << this->_name << "] takes " << amount \
	<< " points of damage!" << std::endl;
	this->_hitpts -= amount;
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!isAlive() || !hasEnergy())
		return ;
	std::cout << "ClapTrap [" << this->_name << "] restored " << amount \
	<< " hit points!" << std::endl;
	this->_hitpts += amount;
	this->_energy -= 1;
}

bool	ClapTrap::isAlive(void)
{
	if (this->_hitpts <= 0)
	{
		std::cout << "[" << this->_name << "] has not enough hit points." << std::endl;
		return (false);
	}
	return (true);
}

bool	ClapTrap::hasEnergy(void)
{
	if (this->_energy <= 0)
	{
		std::cout << "[" << this->_name << "] has not enough energy points." << std::endl;
		return (false);
	}
	return(true);
}
