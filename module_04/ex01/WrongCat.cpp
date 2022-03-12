/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:40 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 13:07:45 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(const WrongCat &Obj): WrongAnimal(Obj)
{
	std::cout << "WrongCat Copy constructor called" << std::endl;
	WrongCat::operator=(Obj);
	return ;
}

WrongCat &WrongCat::operator= (WrongCat const &Obj)
{
	std::cout << "WrongCat Assigment operator called" << std::endl;
	this->_type = Obj._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Meaaawwn!" << std::endl;
}
