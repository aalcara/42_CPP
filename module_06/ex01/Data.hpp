#ifndef DATA_H
#define DATA_H

#include "iostream"

class Data
{
private:
	std::string	_name;
	int			_id;
	bool		_isReal;

protected:

public:
	Data();
	Data(std::string name, int id, bool real);
	~Data();
	Data(const Data &Obj);
	Data	&operator= (Data const &Obj);
	void	printData(void) const;
};

#endif
