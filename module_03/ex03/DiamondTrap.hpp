/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:57:18 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/09 14:57:08 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
#define DIAMONDTRAP_H

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	_name;

public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(const std::string name);
	DiamondTrap(const DiamondTrap &Obj);

	DiamondTrap	&operator= (DiamondTrap const &Obj);

	void	attack(const std::string& target);
	void	whoAmI();
};

#endif
