/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/24 10:30:46 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
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

// int main(void)
// {
// 	std::cout << std::fixed <<std::setprecision(1);
// 	std::cout << "max int: " << std::numeric_limits<int>::max() << std::endl;
// 	std::cout << "min int: " << std::numeric_limits<int>::min() << std::endl;
// 	std::cout << "max float: " << std::numeric_limits<float>::max() << std::endl;
// 	std::cout << "min float: " << -std::numeric_limits<float>::max() << std::endl;
// 	std::cout << "max double: " << std::numeric_limits<double>::max() << std::endl;
// 	std::cout << "min double: " << -std::numeric_limits<double>::max() << std::endl;



// 	// float max = 340282346638528859811704183484516925440.000000f;
// 	double start = 340282346638528859811704183484516926540.000000;
// 	std::cout << start << std::endl;

// 	float increment = static_cast<float>(start);
// 	while (increment <= std::numeric_limits<float>::max())
// 	{
// 		start = start * 1.000000001;
// 		std::cout << start << std::endl;

// 		increment = static_cast<float>(start);
// 		// std::cout << increment << std::endl;
// 	}
// }