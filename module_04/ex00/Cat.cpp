/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:40 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 12:56:00 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &Obj): Animal(Obj)
{
	std::cout << "Cat Copy constructor called" << std::endl;
	Cat::operator=(Obj);
	return ;
}

Cat &Cat::operator= (Cat const &Obj)
{
	std::cout << "Cat Assigment operator called" << std::endl;
	this->_type = Obj._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meaaawwn!" << std::endl;
}
