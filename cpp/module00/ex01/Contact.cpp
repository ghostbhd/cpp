/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:51:52 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/12 16:15:56 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::addContact(void)
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

void Contact::searchContact(void)
{
    std::cout << std::setw(10) << this->_firstName << "|";
    std::cout << std::setw(10) << this->_lastName << "|";
    std::cout << std::setw(10) << this->_nickname << "|";
    std::cout << std::setw(10) << this->_phoneNumber << "|";
    std::cout << std::setw(10) << this->_darkestSecret << std::endl;
}