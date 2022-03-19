#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:

protected:

public:
	RobotomyRequestForm(std::string target);
	bool	execute(Bureaucrat const & executor) const;
};

#endif
