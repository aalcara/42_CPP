/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:11:05 by aalcara-          #+#    #+#             */
/*   Updated: 2022/02/07 21:24:34 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	

	Fixed a;
	// Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	// Fixed const c( Fixed( 5.05f ) + Fixed( 2 ) );
	// Fixed const d( Fixed( 5.05f ) - Fixed( 2 ) );
	// Fixed const e( Fixed( 5.05f ) / Fixed( 2 ) );
	// std::cout << b << std::endl;
	// std::cout << c << std::endl;
	// std::cout << d << std::endl;
	// std::cout << e << std::endl;

	// float test = (float)1 / (float)(1 << 8);
	// std::cout << "1 >> 8 = " << test << std::endl;
	// test = (float)2 / (float)(1 << 8);
	// std::cout << "2 >> 8 = " << test << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// a = 11.87f;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	// Fixed k = 5.05f;
	// Fixed j = Fixed(2);

	// std::cout << k << std::endl;
	// std::cout << j << std::endl;



	// std::cout << Fixed::max( a, b ) << std::endl;


	
	return 0;
}