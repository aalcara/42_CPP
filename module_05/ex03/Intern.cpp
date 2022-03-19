#include "Intern.hpp"

Intern::Intern()
{
	// std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

Intern::~Intern()
{
	// std::cout << "Intern Destructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &Obj)
{
	// std::cout << "Intern Copy constructor called" << std::endl;
	Intern::operator=(Obj);
	return ;
}

Intern &Intern::operator= (Intern const &Obj)
{
	// std::cout << "Intern Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

Form	*Intern::makeForm(std::string formName, std::string target)
{
	std::string	avaliableForms[3] = {"shrubbery creation",
									"robotomy request", 
									"presidential pardon"};
	
	Form	*(Intern::*formsFunctions[3])(std::string target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotomyRequestForm,
		&Intern::makePresidentialPardonForm };

	for (int i = 0; i < 3; i++)
	{
		if (formName == avaliableForms[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return ((this->*formsFunctions[i])(target));
		}
	}
	std::cout << formName << " form is not avaliable." << std::endl;
	return (NULL);
}

Form	*Intern::makeShrubberyCreationForm(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotomyRequestForm(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::makePresidentialPardonForm(std::string target)
{
	return (new PresidentialPardonForm(target));
}