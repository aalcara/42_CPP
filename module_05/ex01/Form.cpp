#include "Form.hpp"

Form::Form(void): _name("unnamed"), _req_sign(MIN_GRADE), _req_exec(MIN_GRADE),
_signed(false) 
{
	// std::cout << "Form Default constructor called" << std::endl;
	try
	{
		this->_checkFormGrades();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

Form::Form(const std::string name, const int req_sign, const int req_exec):
_name(name), _req_sign(req_sign), _req_exec(req_exec), _signed(false) 
{
	// std::cout << "Form Default constructor called" << std::endl;
	try
	{
		this->_checkFormGrades();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return ;
}

Form::~Form()
{
	// std::cout << "Form Destructor called" << std::endl;
	return ;
}

Form::Form(const Form &Obj): _name(Obj._name), _req_sign(Obj._req_sign),
_req_exec(Obj._req_exec), _signed(Obj._signed) 
{
	// std::cout << "Form Copy constructor called" << std::endl;
	return ;
}

Form &Form::operator= (Form const &Obj)
{
	// std::cout << "Form Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void)
{
	return (this->_signed);
}

int	Form::getSignReqGrade(void) const
{
	return (this->_req_sign);
}

int	Form::getExecReqGrade(void) const
{
	return (this->_req_exec);
}

void	Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() > this->getSignReqGrade())
	{
		throw (Form::GradeTooLowException());
	}
	else
		this->_signed = true;

}

void	Form::_checkFormGrades(void)
{
	if (this->_req_exec < MAX_GRADE || this->_req_sign < MAX_GRADE)
		throw (Form::GradeTooHighException());
	else if (this->_req_exec > MIN_GRADE || this->_req_sign > MIN_GRADE)
		throw (Form::GradeTooLowException());
	return ;
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out <<
	"==== FORM: " << form.getName() << " ==== \n" <<
	"Requires grade " << form.getSignReqGrade() << " to be signed." << "\n" <<
	"Requires grade " << form.getExecReqGrade() << " to be executed." << "\n";
	if (form.getSigned())
		out << "[X] Signed" << "\n===================" << std::endl;
	else
		out << "[ ] Signed" << "\n===================" << std::endl;
	return (out);
}

