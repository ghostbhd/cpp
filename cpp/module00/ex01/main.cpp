/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:57:59 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/15 14:58:29 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string input;
	PhoneBook phone;

	phone.init();
	while (1)
	{
		std::cout << "Enter one of three commands : ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		std::cin.clear();
		std::getline(std::cin, input);
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