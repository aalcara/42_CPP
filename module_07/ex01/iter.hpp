/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:57:41 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/08 16:36:52 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>

template <typename T>
void iter(T *addr, size_t len, void (func)(T &member))
{
	for(size_t i = 0; i < len; i++)
	{
		func(addr[i]);
	}
}

template <typename T>
void iter(T const *addr, size_t len, void (func)(T const &member))
{
	for(size_t i = 0; i < len; i++)
	{
		func(addr[i]);
	}
}

template <typename T>
void increment(T &a)
{
	a += 1;
}

template <typename T>
void append_a(T &a)
{
	a.append(1, 'a');
}

template <typename T>
void duplicate(T &a)
{
	a.append(a);
}

template <typename T>
void syscout(T &a)
{
	std::cout << a << std::endl;
}

#endif