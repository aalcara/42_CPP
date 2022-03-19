#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 75, 45)
{
	this->setTarget(target);
	return ;
}

bool	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (Form::execute(executor))
	{
		std::cout << "*drilling noises* " << this->getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
	}
	return (false);
}
