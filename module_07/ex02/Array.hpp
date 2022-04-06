/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:57:41 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/06 17:05:01 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		unsigned int	_nbr;
		T				*_ptr;

	public:
		Array(): _nbr(0), _ptr(NULL) {};
		Array(unsigned int n): _nbr(n), _ptr(new T[n]) {};
		Array(const Array &Obj): _ptr(NULL)
		{
			*this = Obj;
		}

		~Array()
		{
			delete[] this->_ptr;
		};

		T &operator[](unsigned int i) const
		{
			if (i < 0 || i >= this->_nbr)
			{
				throw (Array::OutOfBounds());
			}
			return (this->_ptr[i]);
		}

		Array &operator= (const Array &Obj)
		{
			delete[] this->_ptr;
			this->_nbr = Obj.size();
			this->_ptr = new T[this->_nbr];
			for (unsigned int i = 0; i < this->_nbr; i++)
			{
				this->_ptr[i] = Obj._ptr[i];
			}
			return (*this);
		}

		unsigned int size() const
		{
			return (this->_nbr);
		} 
		
		class OutOfBounds : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Error: Out of bounds");
			}
		};
};

#endif