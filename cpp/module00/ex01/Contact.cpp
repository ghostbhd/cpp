/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:51:52 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/09 17:19:25 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

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