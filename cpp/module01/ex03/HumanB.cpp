/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:06:00 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/20 08:06:37 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
    if (this->_weapon->getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
    else
        std::cout << _name << " no weapon to attack with." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}
