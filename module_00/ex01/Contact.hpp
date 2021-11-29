/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 11:51:49 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/29 10:44:09 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	int	index;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact(int a_index, std::string a_first_name, std::string a_last_name,
		std::string a_nickname, std::string a_phone_number, 
		std::string a_darkest_secret);
	
	Contact();
	int getIndex();
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();
};

#endif