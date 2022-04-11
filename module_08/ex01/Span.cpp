#include "Span.hpp"

Span::Span()
{
	// std::cout << "Span Default constructor called" << std::endl;
	this->_pos = 0;
	return ;
}

Span::Span(unsigned int N)
{
	// std::cout << "Span Default constructor called" << std::endl;
	this->_myvector.resize(N);
	this->_pos = 0;
	return ;
}

Span::~Span()
{
	// std::cout << "Span Destructor called" << std::endl;
	return ;
}

Span::Span(const Span &Obj)
{
	// std::cout << "Span Copy constructor called" << std::endl;
	Span::operator=(Obj);
	return ;
}

Span &Span::operator= (Span const &Obj)
{
	// std::cout << "Span Assigment operator called" << std::endl;
	this->_myvector = Obj._myvector;
	this->_pos = Obj._pos;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_pos < this->_myvector.size())
	{
		this->_myvector[this->_pos] = num;
		this->_pos++;
	}
	else
	{
		throw (Span::OutOfBounds());
	}
	return ;
}


int	Span::shortestSpan(void)
{
	int min;
	if (this->_pos <= 1)
		throw (Span::NotEnoughValues());
	std::sort(this->_myvector.begin(), this->_myvector.end());
	min = this->_myvector[1] - this->_myvector[0]; 
	for (size_t i = 0; i < this->_myvector.size() - 1; i++)
	{
		if ((this->_myvector[i + 1] - this->_myvector[i]) < min)
			min = this->_myvector[i + 1] - this->_myvector[i];
	}
	return (min);
}

int	Span::longestSpan(void)
{
	if (this->_pos <= 1)
		throw (Span::NotEnoughValues());
	std::sort(this->_myvector.begin(), this->_myvector.end());
	return (this->_myvector[this->_myvector.size() - 1] - this->_myvector[0]);
}

void	Span::printAll(void)
{
	for (size_t i = 0; i < this->_myvector.size(); i++)
	{
		std::cout << this->_myvector[i] << " ";
	}
	std::cout << std::endl;
	return ;
	
}
