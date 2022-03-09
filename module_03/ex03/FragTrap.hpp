/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 15:52:28 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/08 17:43:08 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : virtual public ClapTrap
{
private:

protected:
	static unsigned int	_start_hitpts;
	static unsigned int	_start_energy;
	static unsigned int	_start_damage;

public:
	FragTrap();
	~FragTrap();
	FragTrap(const std::string name);
	FragTrap(const FragTrap &Obj);
	FragTrap	&operator= (FragTrap const &Obj);

	void highFivesGuys(void);
};

#endif
