#include "Conversor.hpp"

Conversor::Conversor()
{
	// std::cout << "Conversor Default constructor called" << std::endl;
	return ;
}

Conversor::Conversor(std::string string)
{
	// std::cout << "Conversor Parametrized constructor called" << std::endl;
	this->_valid = true;
	this->_cdisplayable = true;
	this->_cpossible = true;
	this->_ipossible = true;
	this->_pseudoLit.clear();
	if(string[0] == '+' && string.length() > 1)
		this->_src = string.substr(1);
	else
		this->_src = string;
	this->parseInput();
	return ;
}

Conversor::~Conversor()
{
	// std::cout << "Conversor Destructor called" << std::endl;
	return ;
}

Conversor::Conversor(const Conversor &Obj)
{
	// std::cout << "Conversor Copy constructor called" << std::endl;
	Conversor::operator=(Obj);
	return ;
}

Conversor &Conversor::operator= (Conversor const &Obj)
{
	// std::cout << "Conversor Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

bool	Conversor::isPseudoLiteral(void)
{
	std::string possible_pseudo[6] = {"-inff", "inff", "nanf", "-inf", "inf", "nan"};
	
	for(int i = 0; i < 6; i++)
	{
		if(this->_src == possible_pseudo[i])
		{
			return (true);
		}
	}
	return (false);
}

bool	Conversor::isChar(void)
{
	if(this->_src.length() > 1)
		return (false);
	if((this->_src[0] > 31 && this->_src[0] < 48) || (this->_src[0] > 57 && this->_src[0] < 127))
		return (true);
	return (false);
}

bool	Conversor::isInt(void)
{
	int i = 0;
	while(this->_src[i])
	{
		if(this->_src[i] < 48 || this->_src[i] > 57)
			if(i != 0 || this->_src[i] != '-')
				return (false);
		i++;
	}
	double limit_checker = strtod(this->_src.c_str(), NULL);
	if(limit_checker > INT_MAX || limit_checker < INT_MIN)
		return (false);
	return (true);
}

bool	Conversor::isFloat(void)
{
	int		len = this->_src.length();
	bool	point = false;

	for(int i = 0; i < len; i++)
	{
		if(this->_src[i] == '-')
		{
			if(i != 0)
				return (false);
		}
		else if(this->_src[i] == '.')
		{
			if(i == 0 || i >= (len - 2))
				return (false);
			point = true;
		}
		else if(this->_src[i] == 'f')
		{
			if(i != (len - 1))
				return (false);
		}
		else if(this->_src[i] < '0' || this->_src[i] > '9')
			return (false);
	}
	if(this->_src[len - 1] != 'f' || !point)
		return (false);
	return (true);
}

bool	Conversor::isDouble(void)
{
	int		len = this->_src.length();
	bool	point = false;

	for(int i = 0; i < len; i++)
	{
		if(this->_src[i] == '-')
		{
			if(i != 0)
				return (false);
		}
		else if(this->_src[i] == '.')
		{
			if(i == 0 || i >= (len - 1))
				return (false);
			point = true;
		}
		else if(this->_src[i] < '0' || this->_src[i] > '9')
			return (false);
	}
	if(!point)
		return (false);
	return (true);
}

void	Conversor::parseInput(void)
{
	if(this->isPseudoLiteral())
		parsePseudo();
	else if(this->isChar())
		parseChar();
	else if(this->isInt())
		parseInt();
	else if (this->isFloat())
		parseFloat();
	else if (this->isDouble())
		parseDouble();
	else
		this->_valid = false;
	return ;
}

void	Conversor::parsePseudo(void)
{
	std::string possible_pseudo[6] = {"-inff", "inff", "nanf", "-inf", "inf", "nan"};
	this->_cpossible = false;
	this->_ipossible = false;
	
	for(int i = 0; i < 6; i++)
	{
		if(this->_src == possible_pseudo[i])
		{
			if(i < 3)
				this->_pseudoLit = this->_src.substr(0, this->_src.length() - 1);
			else
				this->_pseudoLit = this->_src;
		}
	}
	return ;
}

void	Conversor::parseChar(void)
{
	this->_char = this->_src[0];
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
	return ;
}

void	Conversor::parseInt(void)
{
	this->_int = atoi(this->_src.c_str());
	if(this->_int < 32 || this->_int > 126)
	{
		this->_cdisplayable = false;
		if(this->_int > 127 || this->_int < 0)
			this->_cpossible = false;
	}
	else
		this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}

void	Conversor::parseFloat(void)
{
	this->_float = atof(this->_src.c_str());
	if(this->_float < 32 || this->_float > 126)
	{
		this->_cdisplayable = false;
		if(this->_float > 127 || this->_float < 0)
			this->_cpossible = false;
	}
	else
		this->_char = static_cast<char>(this->_float);
	this->_int = static_cast<int>(this->_float);
	this->_double = static_cast<double>(this->_float);
}

void	Conversor::parseDouble(void)
{
	this->_double = strtod(this->_src.c_str(), NULL);
	if(this->_double < 32 || this->_double > 126)
	{
		this->_cdisplayable = false;
		if(this->_double > 127 || this->_double < 0)
			this->_cpossible = false;
	}
	else
		this->_char = static_cast<char>(this->_double);
	this->_int = static_cast<int>(this->_double);
	this->_float = static_cast<double>(this->_double);
}

bool	Conversor::isValid(void)
{
	return (this->_valid);
}

void	Conversor::printPseudoLiteral(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << this->_pseudoLit << "f" << std::endl; 
	std::cout << "double: " << std::showbase << this->_pseudoLit << std::endl;
	return ;
}

void	Conversor::printResult(void)
{
	std::cout << std::fixed << std::setprecision(1);
	if(this->_pseudoLit.length() > 0)
		return (this->printPseudoLiteral());

	if(!this->_cpossible)
		std::cout << "char: impossible" << std::endl;
	else if(!this->_cdisplayable)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << this->_char << "'" << std::endl;

	std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float << "f" << std::endl; 
	std::cout << "double: " << std::showbase << this->_double << std::endl;

	return ;
}

