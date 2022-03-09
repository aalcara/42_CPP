/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:52:31 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/08 17:43:14 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap: virtual public ClapTrap
{
private:

protected:
	static unsigned int	_start_hitpts;
	static unsigned int	_start_energy;
	static unsigned int	_start_damage;

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
