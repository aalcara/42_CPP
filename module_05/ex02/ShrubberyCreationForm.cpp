#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137)
{
	this->setTarget(target);
	return ;
}

bool	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		fileName = this->getTarget() + "_shrubbery";
	std::string		line;

	if (Form::execute(executor))
	{
		ifs.open("trees.txt", std::ifstream::in);
		ofs.open(fileName.c_str(), std::ofstream::out);
		while (getline(ifs, line))
		{
			ofs << line;
			if (!ifs.eof())
				ofs << "\n";
		}
		ifs.close();
		ofs.close();
	}
	return (false);
}
