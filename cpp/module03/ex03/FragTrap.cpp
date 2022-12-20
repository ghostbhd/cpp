/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:35:02 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/20 13:43:26 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &frag)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	this->_name = frag._name;
	this->_hitPoints = frag._hitPoints;
	this->_energyPoints = frag._energyPoints;
	this->_attackDamage = frag._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " give you a high five" << std::endl;
}
