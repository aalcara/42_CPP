#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.hpp"

#define MAX_GRADE 1
#define MIN_GRADE 150

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	const int			_req_sign;
	const int			_req_exec;
	bool				_signed;
	std::string			_target;

	void	_checkFormGrades(void);

protected:

public:
	Form(void);
	Form(const std::string name, const int req_sign, const int req_exec);
	virtual ~Form();
	Form(const Form &Obj);
	Form	&operator= (Form const &Obj);

	class GradeTooHighException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			const char *what() const throw();
	};
	class FormIsNotSigned: public std::exception
	{
		public:
			const char *what() const throw();
	};

	std::string		getName(void) const;
	bool			getSigned(void) const;
	int				getSignReqGrade(void) const;
	int				getExecReqGrade(void) const;
	std::string		getTarget(void) const;
	void			beSigned(Bureaucrat const &bur);
	void			setTarget(std::string &target);
	virtual bool	execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form &form);

#endif
