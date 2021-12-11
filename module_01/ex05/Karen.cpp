/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:57:53 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/10 10:53:14 by aalcara-         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*PtrFunc[i])();
		}
	}
	return ;
}

void	Karen::debug( void )
{
	std::cout << MSG_DEBUG << std::endl;
	return ;
}

void	Karen::info( void )
{
	std::cout << MSG_INFO << std::endl;
	return ;
}

void	Karen::warning( void )
{
	std::cout << MSG_WARNING << std::endl;
	return ;
}

void	Karen::error( void )
{
	std::cout << MSG_ERROR << std::endl;
	return ;
}
