/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:03:45 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/18 20:25:23 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
    if (this->_weapon.getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << _name << " no weapon to attack with." << std::endl;
}