/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:51:58 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/29 10:43:41 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	oldest_contact = -1;
	return ;
}

void	PhoneBook::addContact(std::string a_first_name, std::string 
	a_last_name, std::string a_nickname, std::string a_phone_number,
	std::string a_darkest_secret)
{
	int	index;

	index = PhoneBook::getIndex();
	contact[index] = Contact(index, a_first_name, a_last_name, a_nickname,
		a_phone_number, a_darkest_secret);
}

int	PhoneBook::getIndex(void)
{
	if (oldest_contact >= MAX_CONTACT - 1)
		oldest_contact = 0;
	else
		oldest_contact++;
	return (oldest_contact);
}

std::string	PhoneBook::truncate(std::string string)
{
	std::string	truncated;

	if (string.length() <= 10)
		return (string);
	truncated = string.substr(0, 9);
	truncated.append(1, '.');
	return (truncated);
}

void	PhoneBook::printLine(int i)
{
	std::cout << "|";
	std::cout << std::right << std::setw(10) << contact[i].getIndex() + 1 
	<< "|";
	std::cout << std::right << std::setw(10) << 
	PhoneBook::truncate(contact[i].getFirstName()) << "|";
	std::cout << std::right << std::setw(10) << 
	PhoneBook::truncate(contact[i].getLastName()) << "|";
	std::cout << std::right << std::setw(10) << 
	PhoneBook::truncate(contact[i].getNickname()) << "|";
	std::cout << std::endl;
}

bool	PhoneBook::isEmpty(int i)
{
	if (contact[i].getFirstName() != "")
		return false;
	if (contact[i].getLastName() != "")
		return false;
	if (contact[i].getNickname() != "")
		return false;
	if (contact[i].getPhoneNumber() != "")
		return false;
	if (contact[i].getDarkestSecret() != "")
		return false;
	return true;

}

void	PhoneBook::printList(void)
{
	int	i;

	i = 0;
	std::cout << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	while (i < MAX_CONTACT)
	{
		if (!PhoneBook::isEmpty(i))
			PhoneBook::printLine(i);
		i++;
	}
	std::cout << std::endl;
}

bool	PhoneBook::showContact(std::string str_index)
{
	int		index;
	int		length;
	char	c;

	length = str_index.length();
	if (length != 1)
		return (false);
	c = str_index.at(0);
	if (c < '1' || c > '8')
		return (false);
	index = atoi(str_index.c_str()) - 1;
	if (PhoneBook::isEmpty(index))
		return (false);
	std::cout << std::endl;
	std::cout << "First name: " << contact[index].getFirstName() << std::endl;
	std::cout << "Last name: " << contact[index].getLastName() << std::endl;
	std::cout << "Nickname: " << contact[index].getNickname() << std::endl;
	std::cout << "Phone number: " << contact[index].getPhoneNumber()
		<< std::endl;
	std::cout << "Darkest secret: " << contact[index].getDarkestSecret()
		<< std::endl;
	std::cout << std::endl;
 	return (true);
}
