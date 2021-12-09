/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:27:56 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/09 08:38:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string a_type)
{
	setType(a_type);
	return ;
}

// Weapon::Weapon(void)
// {
// 	return ;
// }

Weapon::~Weapon(void)
{
	return ;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string a_type)
{
	this->type = a_type;
	return ;
}
