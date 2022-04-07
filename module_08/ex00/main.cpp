/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/07 18:50:50 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>


int	main(void)
{
	std::vector<int> myvector (10);
	std::deque<int> mydeque (10);
	std::list<int> mylist;

	for (int i = 0; i < 10; i++)
	{
		myvector[i] = i;
		mydeque[i] = i;
	}	
	for (int i=1; i<=5; ++i) mylist.push_back(i);

	// std::cout << mydeque.at(121) <<std::endl;
	
	std::cout << "--- Valid value ---" << std::endl;
	std::cout << easyfind(myvector, 0) << std::endl;
	std::cout << easyfind(mydeque, 9) << std::endl;
	std::cout << easyfind(mylist, 1) << std::endl;

	std::cout << "--- Invalid value ---" << std::endl;
	std::cout << easyfind(myvector, 11) << std::endl;
	std::cout << easyfind(mydeque, 25) << std::endl;
	std::cout << easyfind(mylist, 0) << std::endl;

}