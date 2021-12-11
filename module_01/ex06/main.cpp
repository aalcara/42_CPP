/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/11 14:56:13 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <map>

enum enum_level
{
	NT_DEF,
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

std::map<std::string, enum_level> mapString;

static void	init_mapstring(void)
{
	mapString["DEBUG"] = DEBUG;
	mapString["INFO"] = INFO;
	mapString["WARNING"] = WARNING;
	mapString["ERROR"] = ERROR;
}

int	main(int argc, char **argv)
{
	Karen	karen;
	int		level;

	init_mapstring();	
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	level = mapString[argv[1]];
	while (level < 5)
	{
		switch (level) {
			case DEBUG:
				karen.complain("DEBUG");
				break;
			case INFO:
				karen.complain("INFO");
				break;
			case WARNING:
				karen.complain("WARNING");
				break;
			case ERROR:
				karen.complain("ERROR");
				break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]"
				<< std::endl;
				return (0);
		}
		level++;
	}
	return (0);
}
