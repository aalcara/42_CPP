/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/22 18:37:21 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Conversor.hpp"

static bool	valid_args(int argc)
{
	if(argc != 2)
	{
		std::cout << "Wrong number of arguments." << std::endl;
		std::cout << "Usage: ./convert [variable to convert]." << std::endl;
		return (false);
	}
	return (true);
}

int	main(int argc, char **argv)
{
	if(!valid_args(argc))
		return (1);
	Conversor convert(argv[1]);
	if(!convert.isValid())
	{
		std::cout << "Invalid input" << std::endl;
		return (1);
	}
	convert.printResult();
	return (0);
}