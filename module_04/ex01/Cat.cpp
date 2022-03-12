/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:40 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 21:16:16 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
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
	this->_brain = new Brain(*(Obj._brain));
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meaaawwn!" << std::endl;
}

void	Cat::printBrainAddress() const
{
	std::cout << "this brain address: " << (void *)this->_brain << std::endl;
	return ;
}
