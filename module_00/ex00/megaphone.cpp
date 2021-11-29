/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:19:11 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/28 13:43:09 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <algorithm>

int	main(int argc, char *argv[])
{
	int			i;
	int			j;
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 0;
	while(argv[++i])
	{
		j = 0;
		while (argv[i][j])
		{
			str.append(1, toupper(argv[i][j]));
			j++;
		}
	}
	std::cout << str << std::endl;
	return (0);
}
