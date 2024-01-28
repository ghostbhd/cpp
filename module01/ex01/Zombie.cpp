/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 04:57:43 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/17 05:22:42 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << "Zombie [" << this->_name << "] is dead" << std::endl;
}

Zombie *Zombie::setName(std::string name)
{
    this->_name = name;
    return (this);
}

void Zombie::announce(void)
{
    std::cout << this->_name << " : Braiiiiiiinnnssss..." << std::endl;
}
