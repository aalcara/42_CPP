/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:51:46 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/29 10:42:19 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*---------
Constructor
---------*/
Contact::Contact(int a_index, std::string a_first_name, std::string a_last_name,
	std::string a_nickname, std::string a_phone_number,
	std::string a_darkest_secret)
{
	index = a_index;
	first_name = a_first_name;
	last_name = a_last_name;
	nickname = a_nickname;
	phone_number = a_phone_number;
	darkest_secret = a_darkest_secret;
}
Contact::Contact(void)
{
	return ;
}

/*-----
Getters
-----*/
int	Contact::getIndex()
{
	return (index);
}

std::string	Contact::getFirstName()
{
	return (first_name);
}

std::string	Contact::getLastName()
{
	return (last_name);
}

std::string	Contact::getNickname()
{
	return (nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (phone_number);
}

std::string	Contact::getDarkestSecret()
{
	return (darkest_secret);
}
