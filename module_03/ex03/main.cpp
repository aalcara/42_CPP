/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/03 14:19:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
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