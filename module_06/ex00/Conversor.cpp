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
		return (true);
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

void	Conversor::parseInput(void)
{
	if(this->isPseudoLiteral())
		parsePseudo();
	else if(this->isChar())
		parseChar();
	else
		this->_valid = false;
	return ;
}

void	Conversor::parsePseudo(void)
{
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

bool	Conversor::isValid(void)
{
	return (this->_valid);
}

void	Conversor::printResult(void)
{
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "char: '" << this->_src << "'" << std::endl;
	std::cout << "int: " << this->_int << std::endl;
	std::cout << "float: " << this->_float << "f" << std::endl; 
	std::cout << "double: " << std::showbase << this->_double << std::endl;;
	return ;
}

