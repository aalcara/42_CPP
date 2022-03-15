#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character: public ICharacter
{
private:

protected:
	std::string	_name;
	AMateria	*_inventory[4];
	
public:
	Character();
	~Character();
	Character(const std::string name);
	Character(const Character &Obj);
	Character	&operator= (Character const &Obj);

	std::string const &		getName() const;
	void					equip(AMateria* m);
	void					unequip(int idx);
	void					use(int idx, ICharacter& target);
};

#endif
