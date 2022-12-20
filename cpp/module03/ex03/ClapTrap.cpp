/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 19:49:53 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/04 20:26:43 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called Name :" << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;
	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints >= amount)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
		this->_hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no hitPoints left" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints + amount <= 10 && this->_energyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_name << " be repaired " << amount << " points of damage!" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_name << " has no energy left" << std::endl;
}
