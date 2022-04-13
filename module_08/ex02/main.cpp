/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/13 19:57:10 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

#define RED "\e[31m"
#define GREEN "\e[32m"
#define CYAN "\e[36m"
#define NORMAL "\e[00m"

void	log_success (std::string msg)
{
	std::cout << GREEN << "✔ " << msg << NORMAL << std::endl;
}

void	log_failure (std::string msg)
{
	std::cout << RED << "✖ " << msg << NORMAL << std::endl;
}

void	test_header (int nbr)
{
	std::cout << "TEST " << std::setw(2) << std::setfill('0') << nbr << ": ";
}

void	check_is_equal (int n1, int n2)
{
	std::cout << n1 << "==" << n2 << " ";
	if (n1 == n2)
		log_success("Ok!");
	else
		log_failure("not equal");
}

int main()
{
	{
		std::cout << CYAN <<  "---- Testing original stack methods ----" << NORMAL << std::endl;

		test_header(1);
		MutantStack<int> mstack;
		std::stack<int> origstack;
		check_is_equal(mstack.empty(), origstack.empty());

		test_header(2);
		mstack.push(5);
		origstack.push(5);
		mstack.push(17);
		origstack.push(17);
		check_is_equal(mstack.size(), origstack.size());

		test_header(3);
		check_is_equal(mstack.top(), origstack.top());

		test_header(4);
		mstack.pop();
		origstack.pop();
		check_is_equal(mstack.top(), origstack.top());
	}
	
	{
		std::cout << CYAN <<  "---- Testing iterators----" << NORMAL << std::endl;
		MutantStack<int> mstack;
		std::deque<int> mydeque;
		for (int i = 0; i < 10; i++)
		{
			mstack.push(i);
			mydeque.push_back(i);
		}
		MutantStack<int>::iterator itmstack = mstack.begin();
		MutantStack<int>::iterator itmstacke = mstack.end();
		std::deque<int>::iterator itmydeque = mydeque.begin();
		// std::deque<int>::iterator itmydequee = mydeque.end();

		test_header(5);
		check_is_equal(*mstack.begin(), *mydeque.begin());

		test_header(6);
		++itmstack;
		++itmydeque;
		check_is_equal(*itmstack, *itmydeque);
		
		test_header(7);
		itmstack++;
		itmydeque++;
		check_is_equal(*itmstack, *itmydeque);

		test_header(8);
		--itmstack;
		--itmydeque;
		check_is_equal(*itmstack, *itmydeque);

		test_header(9);
		itmstack--;
		itmydeque--;
		check_is_equal(*itmstack, *itmydeque);

		test_header(10);
		while (itmstack != itmstacke)
		{
			itmstack++;
			itmydeque++;
		}
		itmstack--;
		itmydeque--;
		check_is_equal(*itmstack, *itmydeque);

		test_header(11);
		MutantStack<int>::const_iterator citmstack = mstack.begin();
		std::deque<int>::const_iterator citmydeque = mydeque.begin();
		check_is_equal(*citmstack, *citmydeque);

		test_header(12);
		citmstack++;
		citmydeque++;
		check_is_equal(*citmstack, *citmydeque);

		test_header(13);
		MutantStack<int>::reverse_iterator ritmstack = mstack.rbegin();
		std::deque<int>::reverse_iterator ritmydeque = mydeque.rbegin();
		check_is_equal(*ritmstack, *ritmydeque);

		test_header(14);
		ritmstack++;
		ritmydeque++;
		check_is_equal(*ritmstack, *ritmydeque);

		test_header(15);
		MutantStack<int>::const_reverse_iterator critmstack = mstack.rbegin();
		std::deque<int>::const_reverse_iterator critmydeque = mydeque.rbegin();
		check_is_equal(*critmstack, *critmydeque);

		test_header(16);
		critmstack++;
		critmydeque++;
		check_is_equal(*critmstack, *critmydeque);


		
	}
	return 0;
}