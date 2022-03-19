#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:

protected:

public:
	PresidentialPardonForm(std::string target);
	bool	execute(Bureaucrat const & executor) const;
};

#endif
