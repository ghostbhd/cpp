/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:21:36 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/08 18:23:48 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string type;

public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &animal);
	AAnimal &operator=(const AAnimal &animal);
	virtual ~AAnimal();

	std::string getType() const;
	virtual void makeSound() const;
};

#endif