/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/13 15:22:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	{
		std::cout << "\nTEST8 ------------------" << std::endl;
		Form test("form", 150, 150);
		std::cout << test.getName() << std::endl;
		std::cout << test.getSigned() << std::endl;
		std::cout << test.getSignReqGrade() << std::endl;
		std::cout << test.getExecReqGrade() << std::endl;
	}

	{
		std::cout << "\nTEST9 ------------------" << std::endl;
		Form test;
		std::cout << test.getName() << std::endl;
		std::cout << test.getSigned() << std::endl;
		std::cout << test.getSignReqGrade() << std::endl;
		std::cout << test.getExecReqGrade() << std::endl;
	}
	{
		std::cout << "\nTEST10 ------------------" << std::endl;
		try
		{
			Form test("test", 0, 10);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "\nTEST11 ------------------" << std::endl;
		Form test("test", 1, 10);
		Bureaucrat bur("bur", 1);
		std::cout << test.getSigned() << std::endl;
		test.beSigned(bur);
		std::cout << test.getSigned() << std::endl;
		std::cout << test << std::endl;

	}
		{
		std::cout << "\nTEST12 ------------------" << std::endl;
		Form test("test", 2, 10);
		Bureaucrat bur("bur", 2);
		std::cout << test.getSigned() << std::endl;
		bur.signForm(test);
		std::cout << test.getSigned() << std::endl;
		std::cout << test << std::endl;
	}
	{
		std::cout << "\nTEST13 ------------------" << std::endl;
		Form test("test", 1, 10);
		Bureaucrat bur("bur", 2);
		std::cout << test.getSigned() << std::endl;
		bur.signForm(test);
		std::cout << test.getSigned() << std::endl;
		std::cout << test << std::endl;
	}



	return (0);
}
