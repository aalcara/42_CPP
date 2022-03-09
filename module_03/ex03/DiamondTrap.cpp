/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:57:23 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:05 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap [unnamed] constructor called" << std::endl;
	this->_name = "unnamed";
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpts = FragTrap::_start_hitpts;
	this->_energy = ScavTrap::_start_energy;
	this->_damage = FragTrap::_start_damage;
	return ;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap [" << this->_name << "] destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const std::string name)
{
	std::cout << "DiamondTrap ["<< name << "] constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitpts = FragTrap::_start_hitpts;
	this->_energy = ScavTrap::_start_energy;
	this->_damage = FragTrap::_start_damage;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &Obj): ClapTrap(Obj), ScavTrap(Obj), FragTrap(Obj)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	DiamondTrap::operator=(Obj);
	return ;
}

DiamondTrap &DiamondTrap::operator= (DiamondTrap const &Obj)
{
	std::cout << "DiamondTrap Assignation operator called" << std::endl;
	this->_name = Obj._name;
	this->_hitpts = Obj._hitpts;
	this->_energy = Obj._energy;
	this->_damage = Obj._damage;
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap ["<< this->_name << "] has ["<< ClapTrap::_name \
	<< "] ClapTrap name." << std::endl;


}
