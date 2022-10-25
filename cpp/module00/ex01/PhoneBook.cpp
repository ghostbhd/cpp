/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:42:00 by abouhmad          #+#    #+#             */
/*   Updated: 2022/10/25 15:52:18 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
}

PhoneBook::~PhoneBook(void)
{
}

void PhoneBook::addContact(void)
{
    std::cout << "First Name: ";
    std::getline(std::cin, this->_firstName);
    std::cout << "Last Name: ";
    std::getline(std::cin, this->_lastName);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->_nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, this->_phoneNumber);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, this->_darkestSecret);
}

void PhoneBook::searchContact(void) const
{
    std::cout << std::setw(10) << this->_firstName << "|";
    std::cout << std::setw(10) << this->_lastName << "|";
    std::cout << std::setw(10) << this->_nickname << std::endl;
}