/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:23:29 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/18 15:59:13 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string		_type;

public:
	Weapon();
	~Weapon();
	std::string getType();
	void setType(std::string type);
};

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}

#endif