#include "ClassName.hpp"

ClassName::ClassName()
{
	
}

ClassName::~ClassName()
{

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

