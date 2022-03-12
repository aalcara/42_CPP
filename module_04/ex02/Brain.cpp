#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &Obj)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	Brain::operator=(Obj);
	return ;
}

Brain &Brain::operator= (Brain const &Obj)
{
	std::cout << "Brain Assigment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		this->_ideas[i] = Obj._ideas[i];
	}	
	return (*this);
}
