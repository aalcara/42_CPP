/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/19 19:45:20 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	{
		std::cout << "\nTEST1 ------------------" << std::endl;
		Intern bruce;
		Form *form1 = bruce.makeForm("shrubbery creation", "ALVO");
		std::cout << *form1 << std::endl;
		delete form1;
	}
	{
		std::cout << "\nTEST2 ------------------" << std::endl;
		Intern bruce;
		Form *form1 = bruce.makeForm("rollercoaster construction", "ALVO");
		(void)form1;
	}
	{
		std::cout << "\nTEST3 ------------------" << std::endl;
		Intern bruce;
		Form *form1 = bruce.makeForm("robotomy request", "ALVO");
		std::cout << *form1 << std::endl;
		delete form1;
	}
	{
		std::cout << "\nTEST4 ------------------" << std::endl;
		Intern bruce;
		Form *form1 = bruce.makeForm("presidential pardon", "ALVO");
		std::cout << *form1 << std::endl;
		Bureaucrat lisa("lisa", 2);
		Bureaucrat margie("margie", 20);
		lisa.executeForm(*form1);
		margie.signForm(*form1);
		margie.executeForm(*form1);
		lisa.executeForm(*form1);
		delete form1;
	}
	return (0);
}
