/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 13:46:02 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/13 12:28:27 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <map>

int	main(int argc, char **argv)
{
	Karen	karen;
	
	if (argc != 2)
	{
		std::cout << MSG_USAGE << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}
