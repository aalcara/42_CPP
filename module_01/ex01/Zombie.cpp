/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:18:39 by aalcara-          #+#    #+#             */
/*   Updated: 2022/01/20 15:52:05 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (void)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Daryl and Rick killed " << this->a_name << "!" << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->a_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->a_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
