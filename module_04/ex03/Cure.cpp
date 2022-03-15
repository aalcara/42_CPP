/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:45 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 14:11:05 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	// std::cout << "Cure Default constructor called" << std::endl;
	this->_type = "cure";
	return ;
}

Cure::~Cure()
{
	// std::cout << "Cure Destructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure &Obj): AMateria("cure")
{
	// std::cout << "Cure Copy constructor called" << std::endl;
	*this = Obj;
	return ;
}

Cure &Cure::operator= (Cure const &Obj)
{
	// std::cout << "Cure Assigment operator called" << std::endl;
	this->_type = "cure";
	(void)Obj;
	return (*this);
}

Cure* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
