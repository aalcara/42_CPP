/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/09 13:37:31 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int	main(int argc, char *argv[])
{

	std::ifstream ofs;
	std::string temp;

	(void) argv;
	if (argc != 4)
	{
		std::cout << ERR_NUM_ARGS << std::endl;
		return (1);
	}
	ofs.open("test.txt", std::ifstream::in);
	getline(ofs, temp);

	std::cout << temp << std::endl;


	return (0);
}
