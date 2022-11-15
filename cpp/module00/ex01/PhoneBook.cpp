/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:42:00 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/15 15:05:12 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::init(void)
{
	this->contact_count = 0;
	this->size = 0;
}

void PhoneBook::add(void)
{
	if (this->contact_count > 7)
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

	while (i < this->size)
	{
		std::cout << std::setw(10) << i << "|";
		this->contacts[i].showContact();
		i++;
	}
	std::cout << "Enter index: ";
	std::cin >> index;
	if (0 <= index && index < this->size)
		this->contacts[index].searchContact();
	else
		std::cout << "Invalid index" << std::endl;
	std::cin.clear();
	fflush(stdin);
}
