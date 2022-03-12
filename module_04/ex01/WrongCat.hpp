#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:

protected:

public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &Obj);
	WrongCat	&operator= (WrongCat const &Obj);

	void		makeSound() const;
};

#endif
