#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <iostream>
#include <iomanip>

class Conversor
{
private:
	std::string _src;
	bool		_valid;
	char		_char;
	int			_int;
	float		_float;
	double		_double;

	bool	isPseudoLiteral(void);
	bool	isChar(void);
	void	parseInput(void);
	void	parsePseudo(void);
	void	parseChar(void);

protected:

public:
	Conversor();
	Conversor(std::string string);
	~Conversor();
	Conversor(const Conversor &Obj);
	Conversor	&operator= (Conversor const &Obj);

	bool	isValid(void);
	void	printResult(void);
};

#endif
