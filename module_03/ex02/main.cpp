/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/03 14:11:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap uzbi("S. Claus");
	uzbi.takeDamage(5);
	uzbi.attack("nada");
	uzbi.beRepaired(10);
	
	std::cout << "------------" << std::endl;

	uzbi.guardGate();

	std::cout << "------------" << std::endl;

	uzbi.takeDamage(95);
	uzbi.attack("void");
	uzbi.takeDamage(10);
	uzbi.attack("void");
	uzbi.beRepaired(2);

	std::cout << "------------" << std::endl;

	FragTrap trapfrag("Avenue");
	trapfrag.attack("Street");
	trapfrag.takeDamage(20);
	trapfrag.beRepaired(20);
	trapfrag.highFivesGuys();
	
	std::cout << "------------" << std::endl;


	return (0);
}