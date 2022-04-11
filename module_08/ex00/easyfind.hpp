/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:58:01 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/08 15:15:56 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_HPP
#define EASY_HPP

template<typename T>
int	easyfind(T cont, int ref)
{
	int index = 0;
	for (typename T::iterator it = cont.begin(); it != cont.end(); ++it)
	{
		if (*it == ref)
			return (index);
		index++;
	}
	return (-1);
}

#endif