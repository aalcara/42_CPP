/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/08 16:38:44 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "====== INT ======" << std::endl;
	size_t len = 5;
	int int_array[len];
	for (size_t i = 0; i < len; i++)
	{
		int_array[i] = i * 10;
	}

	iter(int_array, len, syscout);
	iter(int_array, len, increment);
	std::cout << "--------------------" << std::endl;
	iter(int_array, len, syscout);

	std::cout << "====== CHAR ======" << std::endl;
	char char_array[len];
	for (size_t i = 0; i < len; i++)
	{
		char_array[i] = 'A' + i;
	}
	iter(char_array, len, syscout);
	iter(char_array, len, increment);
	std::cout << "--------------------" << std::endl;
	iter(char_array, len, syscout);

	std::cout << "====== STRING ======" << std::endl;
	std::string string_arr[len];
	for (size_t i = 0; i < len; i++)
	{
		string_arr[i].append(5, (i+'A'));
	}

	iter(string_arr, len, syscout);
	std::cout << "--------------------" << std::endl;
	iter(string_arr, len, append_a);
	iter(string_arr, len, syscout);
	std::cout << "--------------------" << std::endl;
	string_arr[0].clear();
	iter(string_arr, len, syscout);
	std::cout << "--------------------" << std::endl;
	iter(string_arr, len, append_a);
	iter(string_arr, len, syscout);
	std::cout << "--------------------" << std::endl;
	iter(string_arr, len, duplicate);
	iter(string_arr, len, syscout);

	return (0);
}

