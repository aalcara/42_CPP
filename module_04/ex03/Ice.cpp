/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:45 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 14:12:15 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	// std::cout << "Ice Default constructor called" << std::endl;
	this->_type = "ice";
	return ;
}

Ice::~Ice()
{
	// std::cout << "Ice Destructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice &Obj): AMateria("ice")
{
	// std::cout << "Ice Copy constructor called" << std::endl;
	*this = Obj;
	return ;
}

Ice &Ice::operator= (Ice const &Obj)
{
	// std::cout << "Ice Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

Ice* Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
