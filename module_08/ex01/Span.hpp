#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>

class Span
{
private:
	std::vector<int>			_myvector;
	std::vector<int>::iterator	_myit;

public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &Obj);
	Span	&operator= (Span const &Obj);

	void	addNumber(int num);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	addRangeNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class OutOfBounds : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Error: OUT OF SPACE!");
		}
	};
	class NotEnoughValues : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Error: INSUFICIENT VALUES TO GET THE SPAN!");
		}
	};

	void	printAll(void);

};

#endif
