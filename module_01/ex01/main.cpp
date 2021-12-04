/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/04 16:10:21 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main(void)
{
	Zombie z1;
	z1.setName("Steve");
	z1.announce();

	Zombie *hz1;
	hz1 = zombieHorde(10, "Huge Jackman");
	delete []hz1;

	Zombie *hz2;
	hz2 = zombieHorde(3, "Jason");
	delete []hz2;

	return (0);
}
