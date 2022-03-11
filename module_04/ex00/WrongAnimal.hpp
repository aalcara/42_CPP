#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
private:

protected:
	std::string _type;

public:
	WrongAnimal();
	virtual	~WrongAnimal();
	WrongAnimal(const WrongAnimal &Obj);
	WrongAnimal	&operator= (WrongAnimal const &Obj);

	std::string		getType() const;
	virtual void	makeSound() const;
};

#endif
