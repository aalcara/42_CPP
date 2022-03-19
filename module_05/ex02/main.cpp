/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/19 12:06:55 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		std::cout << "\nTEST1 ------------------" << std::endl;
		ShrubberyCreationForm form1("ALVO");
		Bureaucrat bur("nano", 150);
		std::cout << bur << std::endl;
		bur.executeForm(form1);
		bur.signForm(form1);
		std::cout << form1 << std::endl;
	}
	{
		std::cout << "\nTEST2 ------------------" << std::endl;
		ShrubberyCreationForm form1("ALVO");
		Bureaucrat bur("nano", 1);
		Bureaucrat bur2("micro", 140);
		std::cout << form1 << std::endl;
		bur2.signForm(form1);
		std::cout << form1 << std::endl;
		bur2.executeForm(form1);
	}
	{
		std::cout << "\nTEST3 ------------------" << std::endl;
		ShrubberyCreationForm form1("ALVO");
		Bureaucrat bur("nano", 1);
		Bureaucrat bur2("micro", 140);
		bur2.signForm(form1);
		std::cout << form1 << std::endl;
		bur.executeForm(form1);
	}
	{
		std::cout << "\nTEST4 ------------------" << std::endl;
		RobotomyRequestForm form1("ALVO");
		Bureaucrat bur("nano", 150);
		std::cout << bur << std::endl;
		bur.executeForm(form1);
		bur.signForm(form1);
		std::cout << form1 << std::endl;
	}
	{
		std::cout << "\nTEST5 ------------------" << std::endl;
		RobotomyRequestForm form1("ALVO");
		Bureaucrat bur("nano", 1);
		Bureaucrat bur2("micro", 70);
		std::cout << form1 << std::endl;
		bur2.signForm(form1);
		std::cout << form1 << std::endl;
		bur2.executeForm(form1);
	}
	{
		std::cout << "\nTEST6 ------------------" << std::endl;
		RobotomyRequestForm form1("ALVO");
		Bureaucrat bur("nano", 1);
		Bureaucrat bur2("micro", 70);
		bur2.signForm(form1);
		std::cout << form1 << std::endl;
		bur.executeForm(form1);
	}
	{
		std::cout << "\nTEST7 ------------------" << std::endl;
		PresidentialPardonForm form1("ALVO");
		Bureaucrat bur("grade5", 5);
		Bureaucrat bur2("grade26", 26);
		
		bur.executeForm(form1);
		bur2.signForm(form1);
		bur.signForm(form1);
		std::cout << form1 << std::endl;
		bur2.executeForm(form1);
		bur.executeForm(form1);
	}
	
	return (0);
}
