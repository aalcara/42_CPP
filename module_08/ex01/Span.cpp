#include "Span.hpp"

Span::Span()
{
	// std::cout << "Span Default constructor called" << std::endl;
	this->_myit = this->_myvector.begin();
	return ;
}

Span::Span(unsigned int N)
{
	// std::cout << "Span Default constructor called" << std::endl;
	this->_myvector.resize(N);
	this->_myit = this->_myvector.begin();
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
	this->_myit = Obj._myit;
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_myit < this->_myvector.end())
	{
		this->_myvector.erase(this->_myit);
		this->_myvector.insert(this->_myit, num);
		std::advance(this->_myit, 1);
	}
	else
	{
		throw (Span::OutOfBounds());
	}
	return ;
}
void	Span::addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	while (begin < end)
	{
		this->addNumber(*begin);
		std::advance(begin, 1);
	}
}

int	Span::shortestSpan(void)
{
	int min;
	if (this->_myvector.size() < 2)
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
	if (this->_myvector.size() < 2)
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
