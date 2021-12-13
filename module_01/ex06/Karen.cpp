/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:57:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/13 12:44:18 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen( void )
{
	return ;
}

Karen::~Karen( void )
{
	return ;
}

void	Karen::complain( std::string level )
{
	std::string levels[4] = {"DEBUG", "INFO","WARNING", "ERROR"};
	void (Karen::*PtrFunc[4])(void) = {
	&Karen::debug,
	&Karen::info,
	&Karen::warning,
	&Karen::error
	};
	int i;

	i = 0;
	while (i < 4 && levels[i] != level)
		i++;
	while (i < 5)
	{
		switch (i)
		{
			case 0:
				(this->*PtrFunc[i])();
				i++;
				break;
			case 1:
				(this->*PtrFunc[i])();
				i++;
				break;
			case 2:
				(this->*PtrFunc[i])();
				i++;
				break;
			case 3:
				(this->*PtrFunc[i])();
				return ;
			default:
				std::cout << MSG_INSIGNIFICANT << std::endl;
				return ;
		}
		
	}
	return ;
}

void	Karen::debug( void )
{
	std::cout << MSG_DEBUG << std::endl << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << MSG_INFO << std::endl << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << MSG_WARNING << std::endl << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << MSG_ERROR << std::endl << std::endl;
	return ;
}
