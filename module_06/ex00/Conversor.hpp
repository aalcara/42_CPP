#ifndef CONVERSOR_H
#define CONVERSOR_H

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <limits>

#define	LIM_NOT_DEFINED 0
#define LIM_INT 1
#define	LIM_FLOAT 2
#define	LIM_DOUBLE 3
#define LIM_OVERDOUBLE 4

class Conversor
{
private:
	std::string	_src;
	bool		_valid;
	bool		_cdisplayable;
	bool		_cpossible;
	bool		_ipossible;
	std::string	_pseudoLit;
	char		_char;
	int			_int;
	float		_float;
	double		_double;
	int			_limit;

	bool	isPseudoLiteral(void);
	bool	isChar(void);
	bool	isInt(void);
	bool	isFloat(void);
	bool	isDouble(void);

	void	checkLimits(void);

	void	parseInput(void);
	void	parsePseudo(void);
	void	parseChar(void);
	void	parseInt(void);
	void	parseFloat(void);
	void	parseDouble(void);

protected:

public:
	Conversor();
	Conversor(std::string string);
	~Conversor();
	Conversor(const Conversor &Obj);
	Conversor	&operator= (Conversor const &Obj);

	bool	isValid(void);
	void	printResult(void);
	void	printPseudoLiteral(void);

};

#endif
