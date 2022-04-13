#include "Form.hpp"

Form::Form(void): _name("unnamed"), _req_sign(MIN_GRADE), _req_exec(MIN_GRADE),
_signed(false) 
{
	// std::cout << "Form Default constructor called" << std::endl;
	this->_checkFormGrades();
	return ;
}

Form::Form(const std::string name, const int req_sign, const int req_exec):
_name(name), _req_sign(req_sign), _req_exec(req_exec), _signed(false) 
{
	// std::cout << "Form Default constructor called" << std::endl;
	this->_checkFormGrades();
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

bool	Form::getSigned(void) const
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

std::string	Form::getTarget(void) const
{
	return (this->_target);
}

void	Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() > this->getSignReqGrade())
		throw (Form::GradeTooLowException());
	this->_signed = true;
}

void	Form::setTarget(std::string &target)
{
	this->_target = target;
	return ;
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

const char *Form::FormIsNotSigned::what() const throw()
{
	return ("Form is not signed!");
}

bool	Form::execute(Bureaucrat const & executor) const
{
	if (!this->getSigned())
		throw (Form::FormIsNotSigned());
	else if (executor.getGrade() > this->getExecReqGrade())
		throw (Form::GradeTooLowException());
	return (true);
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
	out << "============================" <<
	"\n| FORM: " << form.getName() << "\n" <<
	"| Requires grade " << form.getSignReqGrade() << " to be signed." << "\n" <<
	"| Requires grade " << form.getExecReqGrade() << " to be executed." << "\n";
	out << "| [";
	if (form.getSigned())
		out << "X";
	else
		out << " ";
	out << "] Signed" << "\n===================" << std::endl;
	return (out);
}
