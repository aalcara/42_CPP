/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/13 15:16:30 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	{
		std::cout << "\nTEST1 ------------------" << std::endl;
		Bureaucrat neo("neo", 1);
		std::cout << neo.getGrade() << std::endl;
		std::cout << neo.getName() << std::endl;
	}
	{
		std::cout << "\nTEST2 ------------------" << std::endl;
		Bureaucrat neo("neo", 150);
		std::cout << neo.getGrade() << std::endl;
		std::cout << neo.getName() << std::endl;
	}
	{
		std::cout << "\nTEST3 ------------------" << std::endl;
		try 
		{
			Bureaucrat neo("neo", 0);
			std::cout << neo.getGrade() << std::endl;
			std::cout << neo.getName() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST4 ------------------" << std::endl;
		try 
		{
			Bureaucrat neo("neo", 1);
			std::cout << neo.getGrade() << std::endl;
			std::cout << neo.getName() << std::endl;
			neo.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST5 ------------------" << std::endl;
		try
		{
			Bureaucrat neo("neo", 1);
			std::cout << neo << std::endl;
			neo.incrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTEST6 ------------------" << std::endl;
		try
		{
			Bureaucrat neo("neo", 299);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "\nTEST7 ------------------" << std::endl;
		Bureaucrat neo("neo", 10);
		std::cout << neo << std::endl;
		neo.incrementGrade();
		std::cout << neo << std::endl;
		neo.decrementGrade();
		std::cout << neo << std::endl;
	}


	return (0);
}
