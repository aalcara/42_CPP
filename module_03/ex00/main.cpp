/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/03 14:02:17 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap first("test");
	ClapTrap third("third");
	ClapTrap custom;

	for(int i = 0; i <= 10 ; i++)
	{
		first.attack("ALVO");
	}
	third.attack("ALVO");
	third.takeDamage(10);
	third.attack("ALVO");
	third.beRepaired(1);

	return (0);
}