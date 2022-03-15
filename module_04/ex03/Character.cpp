#include "Character.hpp"

Character::Character()
{
	// std::cout << "Character Default constructor called" << std::endl;
	return ;
}

Character::~Character()
{
	// std::cout << "Character Destructor called" << std::endl;
	return ;
}

Character::Character(const std::string name)
{
	// std::cout << "Character Named constructor called" << std::endl;
	this->_name = name;
	return ;
}

Character::Character(const Character &Obj): ICharacter(Obj)
{
	// std::cout << "Character Copy constructor called" << std::endl;
	Character::operator=(Obj);
	return ;
}

Character &Character::operator= (Character const &Obj)
{
	// std::cout << "Character Assigment operator called" << std::endl;
	this->_name = Obj._name;
	return (*this);
}

std::string const &	Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	(void)m;
	return ;
}

void	Character::unequip(int idx)
{
	(void)idx;
	return ;

}

void	Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
	return ;
}