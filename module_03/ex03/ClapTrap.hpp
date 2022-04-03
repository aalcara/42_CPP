/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:23:04 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/03 16:09:06 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap
{

protected:
	bool	isAlive(void);
	bool	hasEnergy(void);

	std::string		_name;
	unsigned int	_hitpts;
	unsigned int	_energy;
	unsigned int	_damage;

public:
	ClapTrap();
	~ClapTrap();
	ClapTrap(const std::string name);
	ClapTrap(const ClapTrap &Obj);
	ClapTrap	&operator= (ClapTrap const &Obj);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
