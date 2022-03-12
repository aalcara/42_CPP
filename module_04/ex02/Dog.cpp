/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:04:22 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 21:16:37 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog::Dog(const Dog &Obj): Animal(Obj)
{
	std::cout << "Dog Copy constructor called" << std::endl;
	Dog::operator=(Obj);
	return ;
}

Dog &Dog::operator= (Dog const &Obj)
{
	std::cout << "Dog Assigment operator called" << std::endl;
	this->_type = Obj._type;
	this->_brain = new Brain(*(Obj._brain));
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "HAUF! HAUF!" << std::endl;
}

void	Dog::printBrainAddress() const
{
	std::cout << "this brain address: " << (void *)this->_brain << std::endl;
	return ;
}
