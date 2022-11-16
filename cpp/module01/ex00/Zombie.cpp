/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 20:04:14 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/16 23:53:12 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " : is dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
