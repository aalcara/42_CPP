/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 10:23:13 by aalcara-          #+#    #+#             */
/*   Updated: 2022/02/07 21:31:25 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	private:

	// Atributes
		int					_raw_bits;
		static const int	_frac_bits;
	// Methods

	public:
	// Constructor & Destructor
		Fixed(void);
		Fixed(const Fixed &MyObject);
		Fixed(const int nbr);
		Fixed(const float nbr);
		~Fixed(void);
	// Atributes

	// Methods
		Fixed	&operator= (Fixed const &MyObject);
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		bool	operator> (Fixed const &MyObject)const;
		bool	operator< (Fixed const &MyObject)const;
		bool	operator>= (Fixed const &MyObject)const;
		bool	operator<= (Fixed const &MyObject)const;
		bool	operator== (Fixed const &MyObject)const;
		bool	operator!= (Fixed const &MyObject)const;
		Fixed	&operator+ (Fixed const &MyObject);
		Fixed	&operator- (Fixed const &MyObject);
		Fixed	&operator* (Fixed const &MyObject);
		Fixed	&operator/ (Fixed const &MyObject);
		Fixed	operator++ (int);
		Fixed	&operator++ ();
		Fixed	operator-- (int);
		Fixed	&operator-- ();

};
std::ostream &operator<< (std::ostream &os, const Fixed &f);
#endif
