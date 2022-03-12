/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:05:08 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 19:45:37 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->_type = "Unknown";
	return ;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &Obj)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	Animal::operator=(Obj);
	return ;
}

Animal		&Animal::operator= (Animal const &Obj)
{
	std::cout << "Animal Assigment operator called" << std::endl;
	this->_type = Obj._type;

	return (*this);
}

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "*Unknown Animal Sound*" << std::endl;
}
