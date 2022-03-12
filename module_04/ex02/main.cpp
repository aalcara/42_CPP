/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/12 10:00:02 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "-----------------------------" << std::endl;
	const Dog *dog1 = new Dog();
	const Dog *dog2 = new Dog(*dog1);
	std::cout << dog1->getType() << " " << std::endl;
	std::cout << dog2->getType() << " " << std::endl;

	std::cout << "-------------deep copy test----------------" << std::endl;

	dog1->printBrainAddress();
	dog2->printBrainAddress();

	std::cout << "-----------------------------" << std::endl;
	delete dog1;
	delete dog2;

	std::cout << "-----------------------------" << std::endl;
	const Cat *Cat1 = new Cat();
	const Cat *Cat2 = new Cat(*Cat1);
	std::cout << Cat1->getType() << " " << std::endl;
	std::cout << Cat2->getType() << " " << std::endl;

	std::cout << "-------------deep copy test----------------" << std::endl;

	Cat1->printBrainAddress();
	Cat2->printBrainAddress();

	std::cout << "-----------------------------" << std::endl;
	delete Cat1;
	delete Cat2;

	std::cout << "-----------------------------" << std::endl;

	// Animal anim;
	// std::cout << "type: " << anim.getType() << std::endl;
	// anim.makeSound();
	
	std::cout << "-----------------------------" << std::endl;
	
	return (0);
}
