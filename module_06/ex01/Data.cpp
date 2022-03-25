#include "Data.hpp"

Data::Data()
{
	// std::cout << "Data Default constructor called" << std::endl;
	return ;
}

Data::Data(std::string name, int id, bool real)
{
	this->_name = name;
	this->_id = id;
	this->_isReal = real;

	return ;
}

Data::~Data()
{
	// std::cout << "Data Destructor called" << std::endl;
	return ;
}

Data::Data(const Data &Obj)
{
	// std::cout << "Data Copy constructor called" << std::endl;
	Data::operator=(Obj);
	return ;
}

Data &Data::operator= (Data const &Obj)
{
	// std::cout << "Data Assigment operator called" << std::endl;
	(void)Obj;
	return (*this);
}

void	Data::printData(void) const
{
	std::cout << "|Name: " << this->_name << std::endl;
	std::cout << "|ID:   " << this->_id << std::endl;
	if(this->_isReal)
		std::cout << "|Real? YES" << std::endl;
	else
		std::cout << "|Real? NO" << std::endl;
}
