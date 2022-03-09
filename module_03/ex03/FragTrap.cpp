/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:52:20 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/09 14:20:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int	FragTrap::_start_hitpts = 100;
unsigned int	FragTrap::_start_energy = 100;
unsigned int	FragTrap::_start_damage = 30;

FragTrap::FragTrap()
{
	std::cout << "FragTrap [unnamed] constructor called" << std::endl;
	this->_name = "unnamed";
	this->_hitpts = FragTrap::_start_hitpts;
	this->_energy = FragTrap::_start_energy;
	this->_damage = FragTrap::_start_damage;
	return ;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap [" << name << "] constructor called" << std::endl;
	this->_name = name;
	this->_hitpts = FragTrap::_start_hitpts;
	this->_energy = FragTrap::_start_energy;
	this->_damage = FragTrap::_start_damage;
	return ;
}

FragTrap::FragTrap(const FragTrap &Obj) : ClapTrap(Obj)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
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