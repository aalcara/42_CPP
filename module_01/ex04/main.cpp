/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/09 16:32:16 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

std::string	get_replaced(std::string file_content, char *argv[])
{
	
	size_t			found;
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::string		result;
	
	found = file_content.find(s1);
	while (found != std::string::npos)
	{
		result.append(file_content, 0, found);
		result.append(s2);
		file_content.erase(0, found + s1.length());
		found = file_content.find(s1);
	}
	result.append(file_content, 0, found);
	return (result);
}

int	main(int argc, char *argv[])
{

	std::ifstream	ifs;
	std::ofstream	ofs;
	std::string		file_content;
	std::string		result;
	std::string		filename = argv[1];

	if (argc != 4)
	{
		std::cout << ERR_NUM_ARGS << std::endl;
		return (1);
	}
	ifs.open(filename.c_str(), std::ifstream::in);
	if (!ifs.is_open())
	{
		std::cout << ERR_OPEN_FILE << std::endl;
		return (1);
	}
	getline(ifs, file_content);
	result = get_replaced(file_content, argv);
	filename.append(".replace");
	ofs.open(filename.c_str(), std::ofstream::out);
	ofs << result;
	ifs.close();
	ofs.close();
	return (0);
}
