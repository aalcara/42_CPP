#include "ClassName.hpp"

ClassName::ClassName()
{
	// std::cout << "Default constructor called" << std::endl;
	
}

ClassName::~ClassName()
{
	// std::cout << "Destructor called" << std::endl;
	
}

ClassName::ClassName(const ClassName &Obj)
{
	// std::cout << "Copy constructor called" << std::endl;
	ClassName::operator=(Obj);
	return ;
}

ClassName &ClassName::operator= (ClassName const &Obj)
{
	
}

