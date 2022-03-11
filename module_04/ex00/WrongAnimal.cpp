/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 13:05:38 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 13:08:49 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->_type = "WrongUnknown";
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &Obj)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	WrongAnimal::operator=(Obj);
	return ;
}

WrongAnimal	&WrongAnimal::operator= (WrongAnimal const &Obj)
{
	std::cout << "WrongAnimal Assigment operator called" << std::endl;
	this->_type = Obj._type;

	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "*Unknown WrongAnimal Sound*" << std::endl;
}
