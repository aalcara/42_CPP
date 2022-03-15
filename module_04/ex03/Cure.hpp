/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 10:32:44 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/14 21:15:22 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure: public AMateria
{
private:

protected:

public:
	Cure();
	~Cure();
	Cure(const Cure &Obj);
	Cure	&operator= (Cure const &Obj);

	Cure(std::string const & type);

	std::string const	& getType() const; //Returns the materia type

	Cure*	clone() const;
	void	use(ICharacter& target);
};

#endif
