/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:23:13 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/15 12:27:54 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>
#include <string.h>

class Fixed
{
	private:

	// Atributes
			std::string *ptr;
	// Methods

	public:
	// Constructor & Destructor
		Fixed(std::string str);
		Fixed(const Fixed &MyObject);
		~Fixed(void);


	// Atributes


	// Methods
		std::string getString(void);
		std::string *getPointer(void);
		




};

#endif
