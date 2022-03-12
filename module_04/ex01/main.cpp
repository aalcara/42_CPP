/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/11 21:18:30 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "-----------------------------" << std::endl;
	const Animal* dodo = new Dog();
	const Animal* caca = new Cat();
	std::cout << "-----------------------------" << std::endl;
	std::cout << dodo->getType() << " " << std::endl;
	std::cout << caca->getType() << " " << std::endl;
	std::cout << "-----------------------------" << std::endl;
	caca->makeSound(); //will output the cat sound!
	dodo->makeSound();
	std::cout << "-----------------------------" << std::endl;
	delete dodo;
	delete caca;
	std::cout << "-----------------------------" << std::endl;
	Animal *zoo[100];
	for (int i = 0; i < 50; i++)
	{
		zoo[i] = new Dog();
	}
	for (int i = 50; i < 100; i++)
	{
		zoo[i] = new Cat();
	}
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << i << " type: " << zoo[i]->getType() << std::endl;
	}
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		delete zoo[i];
	}

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
	return (0);
}

