/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:32:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/15 12:36:07 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(std::string str)
{
	this->ptr = new std::string;
	this->ptr->append(str);
	std::cout << "Constructor" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &MyObject)
{
	this->ptr = new std::string;
	if (MyObject.ptr != NULL)
		this->ptr->append(*MyObject.ptr);
	std::cout << "Copy Constructor" << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	delete (this->ptr);
	std::cout << "Destructor" << std::endl;
}

std::string Fixed::getString(void)
{
	return (*this->ptr);
}

std::string *Fixed::getPointer(void)
{
	return (this->ptr);
}