/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 03:58:49 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/07 22:48:52 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog sound" << std::endl;
}
