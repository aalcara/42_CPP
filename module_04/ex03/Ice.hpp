/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:44 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/14 21:15:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice: public AMateria
{
private:

protected:

public:
	Ice();
	~Ice();
	Ice(const Ice &Obj);
	Ice	&operator= (Ice const &Obj);

	Ice(std::string const & type);

	std::string const	& getType() const; //Returns the materia type

	Ice*				clone() const;
	void				use(ICharacter& target);
};

#endif
