/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/09 15:00:58 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// ClapTrap first("test");
	// ClapTrap third("third");
	// ScavTrap uzbi("Jozias");
	// uzbi.takeDamage(5);
	// uzbi.attack("nada");
	// uzbi.beRepaired(10);
	
	// std::cout << "------------" << std::endl;

	// uzbi.guardGate();

	// std::cout << "------------" << std::endl;

	// uzbi.takeDamage(95);
	// uzbi.attack("void");
	// uzbi.takeDamage(10);
	// uzbi.attack("void");
	// uzbi.beRepaired(2);

	// std::cout << "------------" << std::endl;

	// FragTrap firstfrag("Avenue");
	// firstfrag.attack("Street");
	// firstfrag.takeDamage(20);
	// firstfrag.beRepaired(20);
	// firstfrag.highFivesGuys();
	
	// std::cout << "------------" << std::endl;

	// firstfrag.takeDamage(99);
	// firstfrag.attack("Street");
	// firstfrag.takeDamage(1);
	// firstfrag.attack("Street");

	std::cout << "------------" << std::endl;

	DiamondTrap dan("kodak");
	std::cout << "------------" << std::endl;
	dan.takeDamage(10);
	dan.beRepaired(10);
	dan.attack("target");
	dan.guardGate();
	dan.highFivesGuys();
	dan.whoAmI();

	std::cout << "------------" << std::endl;




	return (0);
}