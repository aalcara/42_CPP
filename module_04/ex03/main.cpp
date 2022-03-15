/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 11:22:57 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/15 14:22:25 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	std::cout << "-----------------------------" << std::endl;
	AMateria *ice1 = new Ice();
	AMateria *cure1 = new Cure();

	std::cout << "type: " << ice1->getType() << std::endl;
	std::cout << "type: " << cure1->getType() << std::endl;

	std::cout << "-----------------------------" << std::endl;
	AMateria *ice2 = ice1->clone();
	std::cout << "type: " << ice2->getType() << std::endl;
	AMateria *cure2 = cure1->clone();
	std::cout << "type: " << cure2->getType() << std::endl;

	std::cout << "-----------------------------" << std::endl;

	ICharacter *char1 = new Character("neo");
	std::cout << "name: " << char1->getName() << std::endl;

	std::cout << "-----------------------------" << std::endl;
	ice1->use(*char1);
	ice2->use(*char1);
	cure1->use(*char1);
	cure2->use(*char1);

	std::cout << "-----------------------------" << std::endl;



	std::cout << "-----------------------------" << std::endl;
	delete ice1;
	delete cure1;
	delete ice2;
	delete cure2;
	delete char1;
	std::cout << "-----------------------------" << std::endl;
	return (0);
}
