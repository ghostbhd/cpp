/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 00:42:00 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/11 17:37:45 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(void)
{
    if (this->contact_count == 8)
        this->contact_count = 0;
    this->contacts[this->contact_count].addContact();
    this->contact_count++;
}

void PhoneBook::search(void)
{
    int i;
    int index;

    i = 0;
    while (i < 8)
    {
        std::cout << std::setw(10) << i << "|";
        this->contacts[i].searchContact();
        i++;
    }
    std::cout << "Enter index: ";
    std::cin >> index;
    if (index >= 0 && index < this->contact_count)
        this->contacts[index].searchContact();
    else
        std::cout << "Invalid index" << std::endl;
}

int main()
{
    std::string input[];
    PhoneBook   phone;

    while (1)
    {
        std::cout << "enter one of three commands : ADD, SEARCH or EXIT" << std::endl;
        std::cout << "> ";
        getline(std::cin, input);
        if (input == "ADD")
            phone.addContact();
        else if (input == "SEARCH")
            phone.searchContact();
        else if (input == "EXIT")
            break ;
        else
        {
            std::cout << "Invalid command" << std::endl;
            system("clear");
        }
    }
    return (0);
}