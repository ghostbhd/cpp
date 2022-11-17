/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 23:34:41 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/17 00:22:15 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    std::string		name;
	
	//--------------------------------------------
	std::cout << "Create Zombie in the stack" << std::endl;
	std::cout << "Enter Zombie name : ";
	std::cin >> name;
	Zombie zmb(name);
	
	//--------------------------------------------
	std::cout << "Create Zombie in the heap" << std::endl;
	std::cout << "Enter Zombie name : ";
	std::cin >> name;
	Zombie *zmb2 = newZombie(name);
	zmb2->announce();
	delete zmb2;
	
	//--------------------------------------------
	std::cout << "randomChump" << std::endl;
	std::cout << "Enter Zombie name : ";
	std::cin >> name;
	randomChump(name);
    
    return 0;
}