/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:19:24 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/23 05:57:51 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Cat::Cat(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat copy constructor called" << std::endl;
	try
	{
		this->_brain = new Brain(*copy._brain);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
	}
}

Cat &Cat::operator=(const Cat &copy)
{
	this->type = copy.type;
	std::cout << "Cat assignation operator called" << std::endl;
	try
	{
		this->_brain = new Brain(*copy._brain);
	}
	catch(const std::bad_alloc& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat sound" << std::endl;
}
