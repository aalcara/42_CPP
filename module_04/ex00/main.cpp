/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/04/08 14:52:24 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int	main(void)
// {
// 	Animal zebra;
// 	Dog dog;
// 	Cat cat;
// 	std::cout << "-----------" << std::endl;
// 	std::cout << zebra.getType() << std::endl;
// 	std::cout << dog.getType() << std::endl;
// 	std::cout << cat.getType() << std::endl;
// 	std::cout << "-----------" << std::endl;
// 	zebra.makeSound();
// 	dog.makeSound();
// 	cat.makeSound();
// 	std::cout << "-----------" << std::endl;

// 	return (0);
// }

// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	std::cout << "------" << std::endl;
// 	delete meta;
// 	delete j;
// 	delete i;
// }


#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* i = new WrongCat();

	std::cout << i->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	meta->makeSound();
	std::cout << "------" << std::endl;
	delete meta;
	delete i;
	return 0;
}
