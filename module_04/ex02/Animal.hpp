/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:04:00 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/12 09:39:58 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
private:

protected:
	std::string	_type;

public:
	Animal();
	virtual ~Animal();
	Animal(const Animal &Obj);
	Animal	&operator= (Animal const &Obj);

	std::string	getType() const;
	virtual void	makeSound() const = 0;
};

#endif
