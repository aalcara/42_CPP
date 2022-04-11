/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 19:57:59 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/08 17:45:31 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

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
	
}