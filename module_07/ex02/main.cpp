/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/06 16:59:42 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <cmath>
#include <iomanip>

#define MAX_VAL 5
int main(int, char **)
{
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	// SCOPE
	// {
	Array<int> tmp = numbers;
	Array<int> test(tmp);
	// }

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
		else
			std::cout << numbers[i] << "\t| " << tmp[i] << "\t| " << test[i] << "\tOK!" << std::endl;
	}

	std::cout << "----" <<std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
		std::cout << numbers[i] << "\t| " << tmp[i] << "\t| " << test[i] << "\tOK!" << std::endl;
	}

	std::cout << "----" <<std::endl;

	for (int i = 0; i < MAX_VAL; i++)
	{
		tmp[i] = rand();
		std::cout << numbers[i] << "\t| " << tmp[i] << "\t| " << test[i] << "\tOK!" << std::endl;
	}
	delete[] mirror; //

	std::cout << "\n==== testing outofbound value assigment" <<std::endl;
	try
	{
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	// try
	// {
	// 	for (int i = 0; i < MAX_VAL + 1; i++)
	// 	{
	// 		const int value = rand();
	// 		numbers[i] = value;
	// 	}
	// }
	// catch (const std::exception &e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	std::cout << "\n==== testing outofbound Array assigment" <<std::endl;
	Array<int> test2(MAX_VAL + 1);
	for (int i = 0; i < MAX_VAL + 1; i++)
	{
		const int value = rand();
		test2[i] = value;
	}
	
	std::cout << "--- before assigment" <<std::endl;
	for (unsigned int i = 0; i < MAX_VAL + 1; i++)
	{
		std::cout << i << ": ";
		if (i < numbers.size())
			std::cout << std::setw(12) << numbers[i];
		else
			std::cout << std::setw(12) << "-"; 
		if (i < test2.size())
			std::cout << "|" << std::setw(12) << test2[i] << std::endl;
		else
			std::cout << "|" << std::setw(12) << "-" << std::endl; 
	}


	numbers = test2;
	std::cout << "--- after assigment" <<std::endl;
	for (unsigned int i = 0; i < MAX_VAL + 1; i++)
	{
		std::cout << i << ": ";
		if (i < numbers.size())
			std::cout << std::setw(12) << numbers[i];
		else
			std::cout << std::setw(12) << "-";
		if (i < test2.size())
			std::cout << "|" << std::setw(12) << test2[i] << std::endl;
		else
			std::cout << "|" << std::setw(12) << "-" << std::endl; 
	}

	Array<int> testvazio;
	// testvazio = test2;
	return 0;
}