/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:29:02 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/13 15:17:47 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

#define MIN_GRADE 150
#define MAX_GRADE 1

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	void				_check_grade(int grade);

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &Obj);
	Bureaucrat(const std::string name, const int grade);
	Bureaucrat &operator= (Bureaucrat const &Obj);

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	std::string	getName(void) const;
	int			getGrade(void) const;
	void		incrementGrade(void);
	void		decrementGrade(void);

	void		signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bur);

#endif
