/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:45 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 14:08:53 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria Default constructor called" << std::endl;
	return ;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria Destructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &Obj)
{
	// std::cout << "AMateria Copy constructor called" << std::endl;
	AMateria::operator=(Obj);
	return ;
}

AMateria::AMateria(std::string const & type)
{
	// std::cout << "AMateria Default constructor called" << std::endl;
	this->_type = type;
	return ;
}


AMateria &AMateria::operator= (AMateria const &Obj)
{
	// std::cout << "AMateria Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}