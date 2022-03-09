#include "ClassName.hpp"

ClassName::ClassName()
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

ClassName::~ClassName()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

ClassName::ClassName(const ClassName &Obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	ClassName::operator=(Obj);
	return ;
}

ClassName &ClassName::operator= (ClassName const &Obj)
{
	// std::cout << "Assigment operator called" << std::endl;
	return (*this);
}

