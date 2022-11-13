/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:42:00 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/13 19:03:18 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
	if (this->contact_count == 8)
		this->contact_count = 0;
	this->contacts[this->contact_count].addContact();
	this->contact_count++;
	if (this->size < 8)
		this->size++;
}

void PhoneBook::search(void)
{
	int i = 0;
	int index;

	while (i < 8)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].searchContact();
		i++;
	}
	std::cout << "Enter index: ";
	std::cin >> index;
	if (index >= 0 && index < this->size)
		this->contacts[index].searchContact();
	else
		std::cout << "Invalid index" << std::endl;
}

int main()
{
	std::string input;
	PhoneBook phone;

	while (1)
	{
		std::cout << "Enter one of three commands : ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		getline(std::cin, input);
		if (input.compare("ADD") == 0)
			phone.add();
		else if (input.compare("SEARCH") == 0)
			phone.search();
		else if (input.compare("EXIT") == 0)
			break;
		else
		{
			std::cout << "\033[31mInvalid command\033[0m" << std::endl;
			usleep(1500000);
			system("clear");
		}
	}
	return (0);
}