/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalcara- <aalcara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:51:55 by aalcara-          #+#    #+#             */
/*   Updated: 2021/11/30 09:23:26 by aalcara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

void	add_contact(PhoneBook *phonebook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "ADD CONTACT:" << std::endl;
	std::cout << "First name: ";
	while (first_name.empty())
		getline(std::cin, first_name);
	std::cout << "Last name: ";
	while (last_name.empty())
		getline(std::cin, last_name);
	std::cout << "Nickname: ";
	while (nickname.empty())
		getline(std::cin, nickname);
	std::cout << "Phone number: ";
	while (phone_number.empty())
		getline(std::cin, phone_number);
	std::cout << "Darkest secret: ";
	while (darkest_secret.empty())
		getline(std::cin, darkest_secret);
	phonebook->addContact(first_name, last_name, nickname, phone_number,
		darkest_secret);
	std::cout << "CONTACT ADDED!" << std::endl;
}

void	show_list(PhoneBook phonebook)
{
	std::string	index;

	phonebook.printList();
	std::cout << "Type index: ";
	getline(std::cin, index);
	while (!phonebook.showContact(index))
	{
		std::cout << "INVALID NUMBER" << std::endl;
		std::cout << "Type index: ";
		getline(std::cin, index);
	}
}

void	valid_commands(void)
{
	std::cout << " ______________________________" << std::endl;
	std::cout << "|                              |" << std::endl;
	std::cout << "|           COMMANDS:          |" << std::endl;
	std::cout << "|------------------------------|" << std::endl;
	std::cout << "|ADD     - Insert a new contact|" << std::endl;
	std::cout << "|SEARCH  - View contact list   |" << std::endl;
	std::cout << "|EXIT    - Exit the program    |" << std::endl;
	std::cout << "|______________________________|" << std::endl;
	std::cout << std::endl;
}

std::string	prompt_input(void)
{
	std::string	input;

	std::cout << "Type your command: ";
	getline(std::cin, input);
	return (input);
}

int	main(void)
{
	std::string	command;
	PhoneBook	phonebook;

	std::cout << " ______________________________" << std::endl; 
	std::cout << "|                              |" << std::endl; 
	std::cout << "|            WELCOME!          |" << std::endl; 
	std::cout << "|______________________________|" << std::endl; 
	valid_commands();
	while (true)
	{
		command = prompt_input();
		if (command == "ADD")
			add_contact(&phonebook);
		else if (command == "SEARCH")
			show_list(phonebook);
		else if (command == "EXIT")
			break ;
		else
		{
			std::cout << "INVALID COMMAND!" << std::endl;
		}
	}
	return (0);
}