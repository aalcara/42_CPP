/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:44 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 08:11:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
private:

protected:
	std::string	_type;

public:
	AMateria();
	virtual ~AMateria();
	AMateria(const AMateria &Obj);
	AMateria	&operator= (AMateria const &Obj);

	AMateria(std::string const & type);

	std::string const	& getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif
