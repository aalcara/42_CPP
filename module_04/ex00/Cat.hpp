/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:03:58 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 11:11:31 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat: public Animal
{
private:

public:
	Cat();
	~Cat();
	Cat(const Cat &Obj);
	Cat	&operator= (Cat const &Obj);

	void		makeSound() const;
};

#endif
