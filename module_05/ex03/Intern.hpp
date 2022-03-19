#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form	*makeShrubberyCreationForm(std::string target);
	Form	*makePresidentialPardonForm(std::string target);
	Form	*makeRobotomyRequestForm(std::string target);

protected:

public:
	Intern();
	~Intern();
	Intern(const Intern &Obj);
	Intern	&operator= (Intern const &Obj);
	Form	*makeForm(std::string formName, std::string target);

};

#endif
