/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:05 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 20:18:39 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &Obj)
{
	std::cout << "Bureaucrat Copy constructor called" << std::endl;
	*this = Obj;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade): _name(name)
{
	std::cout << "Bureaucrat Parametrized constructor called" << std::endl;
	try
	{
		this->_check_grade(grade);
		this->_grade = grade;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = MIN_GRADE;
	}
	return ;
}

Bureaucrat &Bureaucrat::operator= (Bureaucrat const &Obj)
{
	std::cout << "Bureaucrat Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	try
	{
		this->_check_grade(this->_grade - 1);
		this->_grade -= 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	try
	{
		this->_check_grade(this->_grade + 1);
		this->_grade += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void	Bureaucrat::_check_grade(int grade)
{
	if (grade < MAX_GRADE)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > MIN_GRADE)
		throw (Bureaucrat::GradeTooLowException());
	return ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Error: Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Error: Grade is too high!");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur)
{
	out << bur.getName() << ", bureaucrat grade " << bur.getGrade() << ".";
	return (out);
}

