/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/06 18:14:22 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>


int	main(void)
{
	std::vector<int> myvector (10);
	std::deque<int> mydeque (10);
	for (int i = 0; i < 10; i++)
	{
		myvector[i] = i;
		mydeque[i] = i+20;
	}
	// std::cout << mydeque.at(121) <<std::endl;
	std::cout << easyfind(myvector, 0) << std::endl;
	std::cout << easyfind(mydeque, 25) << std::endl;
}