/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 20:57:49 by aalcara-          #+#    #+#             */
/*   Updated: 2021/12/10 10:52:54 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

#define MSG_DEBUG "[DEBUG]: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!"
#define MSG_INFO "[INFO]: I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
#define MSG_WARNING "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
#define MSG_ERROR "[ERROR]: This is unacceptable, I want to speak to the manager now."

class Karen
{
	public:
		Karen( void );
		~Karen( void );
		void	complain( std::string level );
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
};

#endif