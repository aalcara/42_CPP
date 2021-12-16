/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:11:05 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/15 12:44:25 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	std::string local_string = "local test";
	
	Fixed foo(local_string);

	Fixed copyfoo(foo);


	std::cout << "local string" <<
	local_string <<std::endl << 
	&local_string << std::endl;

	std::cout << "--------" << std::endl;

	std::cout << "Constructor:" <<
	foo.getString() <<std::endl << 
	"points to: " << foo.getPointer() << std::endl <<
	"class address: " << &foo << std::endl;

	std::cout << "--------" << std::endl;

	std::cout << "Copy Constructor:" <<
	foo.getString() <<std::endl << 
	"points to: " << copyfoo.getPointer() << std::endl <<
	"class address: " << &copyfoo << std::endl;

	return 0;
}
