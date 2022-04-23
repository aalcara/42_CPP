/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:58:01 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/23 18:48:29 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
#define EASY_HPP

#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		const char* what() const throw()
		{
			return ("Value not found");
		}
};

template<typename T>
typename T::iterator	easyfind(T &cont, int ref)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), ref);
	if (it == cont.end())
		throw NotFoundException();
	return (it);
}

#endif