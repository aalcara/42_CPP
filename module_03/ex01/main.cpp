/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/08 12:21:57 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	// ClapTrap first("test");
	// ClapTrap third("third");
	ScavTrap uzbi("Jozias");
	uzbi.takeDamage(5);
	uzbi.attack("nada");
	uzbi.beRepaired(10);
	
	std::cout << "------------" << std::endl;

	// ScavTrap acer(uzbi);
	// acer.attack("nada");
	
	// std::cout << "------------" << std::endl;

	uzbi.guardGate();

	std::cout << "------------" << std::endl;

	uzbi.takeDamage(95);
	uzbi.attack("void");
	uzbi.takeDamage(10);
	uzbi.attack("void");
	uzbi.beRepaired(2);

	return (0);
}