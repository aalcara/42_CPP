#ifndef SPAN_H
#define SPAN_H

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private:
	std::vector<int>	_myvector;
	unsigned int		_pos;

protected:

public:
	Span();
	Span(unsigned int N);
	~Span();
	Span(const Span &Obj);
	Span	&operator= (Span const &Obj);

	void	addNumber(int num);
	int		shortestSpan(void);
	int		longestSpan(void);
	void	addRangeNumber(void);

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
