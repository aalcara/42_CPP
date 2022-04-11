/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/11 19:30:01 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	Span sp = Span(5);

	sp.printAll();

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	// sp.addNumber(11);
	// sp.addNumber(99);

	sp.printAll();

	Span sp2;

	// sp2.addNumber(1);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	// std::cout << sp2.shortestSpan() << std::endl;
	// std::cout << sp2.longestSpan() << std::endl;

	Span spr(10000);
	std::vector<int> testvector(5,100);
	std::vector<int> testvector2;

	for(int i = 0; i < 9995 ; i++)
	{
		testvector2.push_back(i);
	}

	spr.addRangeNumber(testvector.begin(), testvector.end());
	spr.addRangeNumber(testvector2.begin(), testvector2.end());
	
	std::cout << spr.shortestSpan() << std::endl;
	std::cout << spr.longestSpan() << std::endl;
	
}