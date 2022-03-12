#ifndef BRAIN_H
#define BRAIN_H

#include <iostream> 

class Brain
{
private:

protected:
	std::string _ideas[100];

public:
	Brain();
	~Brain();
	Brain(const Brain &Obj);
	Brain	&operator= (Brain const &Obj);
};

#endif
