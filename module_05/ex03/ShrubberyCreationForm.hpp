#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include <iostream>
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:

protected:

public:
	ShrubberyCreationForm(std::string target);
	bool	execute(Bureaucrat const & executor) const;
};

#endif
