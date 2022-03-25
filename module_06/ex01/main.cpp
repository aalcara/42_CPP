/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:24:19 by aalcara-          #+#    #+#             */
/*   Updated: 2022/03/25 17:28:46 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data data("Lance", 42, true);
	Data data2("Hagrid", 11, false);
	Data *startPtr = &data;
	Data *endPtr = &data2;


	std::cout << "\n----- start data  -----" << std::endl;
	startPtr->printData();
	std::cout << std::endl;
	endPtr->printData();

	std::cout << "\n-----  serialized data  -----" << std::endl;
	uintptr_t serialized = serialize(startPtr);
	std::cout << serialized << std::endl;

	std::cout << "\n-----  deserialized data  -----" << std::endl;
	endPtr = deserialize(serialized);
	endPtr->printData();

	return (0);
}
