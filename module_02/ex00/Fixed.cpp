/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:32:45 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/30 20:20:36 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default Constructor Called" << std::endl;
	this->setRawBits(0);
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &MyObject)
{
	std::cout << "Copy constructor called" << std::endl;
	Fixed::operator=(MyObject);
	return ;
}

Fixed &Fixed::operator= (Fixed const &MyObject)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_raw_bits = MyObject.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void)const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

