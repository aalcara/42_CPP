/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/04 14:45:28 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string);
void randomChump(std::string name);

int	main(void)
{
	Zombie z1("Steve");
	z1.announce();

	Zombie *nz1;
	nz1 = newZombie("Hommer");
	nz1->announce();
	delete nz1;
	
	randomChump("Frodo");
	
	return (0);
}