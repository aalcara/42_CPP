#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5)
{
	this->setTarget(target);
	return ;
}

bool	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (Form::execute(executor))
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
	return (false);
}
