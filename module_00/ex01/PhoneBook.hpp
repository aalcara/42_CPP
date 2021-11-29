/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:54:49 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/29 10:45:05 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h> 

#define MAX_CONTACT 8

class PhoneBook
{
private:
	Contact	contact[MAX_CONTACT];
	int		oldest_contact;
	int		getIndex();
public:
	PhoneBook();
	void	addContact(std::string a_first_name, std::string a_last_name,
		std::string a_nickname, std::string a_phone_number,
		std::string a_darkest_secret);
	std::string truncate(std::string string);
	void	printLine(int i);
	bool	isEmpty(int index);
	void	printList(void);
	bool	showContact(std::string index);
};

#endif