/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/23 18:48:38 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>
#include <iterator>

int	main(void)
{
	std::vector<int> myvector (10);
	std::deque<int> mydeque (10);
	std::list<int> mylist;

	for (int i = 0; i < 10; i++)
	{
		myvector[i] = i + 1;
		mydeque[i] = i + 1;
	}	
	for (int i=1; i<=5; ++i) mylist.push_back(i);

	
	std::cout << "===================" << std::endl;
	std::cout << "--- Vector test ---" << std::endl;
	std::cout << "===================" << std::endl;
	std::vector<int>::iterator find_it;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Trying to find: " << i << std::endl;
		try
		{
			find_it = easyfind(myvector, i);
			std::cout << "Finded at position: " << std::distance(myvector.begin(), find_it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		
	}

	std::cout << "===================" << std::endl;
	std::cout << "--- deque test ---" << std::endl;
	std::cout << "===================" << std::endl;
	std::deque<int>::iterator find_deque_it;
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Trying to find: " << i << std::endl;
		try
		{
			find_deque_it = easyfind(mydeque, i);
			std::cout << "Finded at position: " << std::distance(mydeque.begin(), find_deque_it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		
	}

	std::cout << "===================" << std::endl;
	std::cout << "--- list test ---" << std::endl;
	std::cout << "===================" << std::endl;
	std::list<int>::iterator find_list_it;
	for (int i = 0; i < 7; i++)
	{
		std::cout << "Trying to find: " << i << std::endl;
		try
		{
			find_list_it = easyfind(mylist, i);
			std::cout << "Finded at position: " << std::distance(mylist.begin(), find_list_it) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
		
	}
	
	mylist.pop_back();

}