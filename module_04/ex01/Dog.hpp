/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:56 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 19:59:44 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;

public:
	Dog();
	~Dog();
	Dog(const Dog &Obj);
	Dog	&operator= (Dog const &Obj);

	void		makeSound() const;
	void		printBrainAddress() const;
};

#endif
