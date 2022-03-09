#include "ClassName.hpp"

ClassName::ClassName()
{
	// std::cout << "ClassName Default constructor called" << std::endl;
	return ;
}

ClassName::~ClassName()
{
	// std::cout << "ClassName Destructor called" << std::endl;
	return ;
}

ClassName::ClassName(const ClassName &Obj)
{
	// std::cout << "ClassName Copy constructor called" << std::endl;
	ClassName::operator=(Obj);
	return ;
}

ClassName &ClassName::operator= (ClassName const &Obj)
{
	// std::cout << "ClassName Assigment operator called" << std::endl;
	return (*this);
}

