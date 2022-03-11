/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:56 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 11:11:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog: public Animal
{
private:

public:
	Dog();
	~Dog();
	Dog(const Dog &Obj);
	Dog	&operator= (Dog const &Obj);

	void		makeSound() const;

};

#endif
