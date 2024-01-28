/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 00:07:22 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/08 00:54:29 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter()
{
}

Converter::Converter(Converter const &src)
{
	*this = src;
}

Converter::~Converter()
{
}

Converter &Converter::operator=(Converter const &rhs)
{
	if (this != &rhs)
	{
		this->_int = rhs._int;
		this->_float = rhs._float;
		this->_double = rhs._double;
		this->_char = rhs._char;
		this->_isChar = rhs._isChar;
		this->_isInt = rhs._isInt;
		this->_isFloat = rhs._isFloat;
		this->_isDouble = rhs._isDouble;
	}
	return (*this);
}

void Converter::convert(std::string str)
{
	this->_isChar = false;
	this->_isInt = false;
	this->_isFloat = false;
	this->_isDouble = false;

	try
	{
		this->_char = static_cast<char>(std::stoi(str));
		this->_isChar = true;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		this->_int = std::stoi(str);
		this->_isInt = true;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		this->_float = std::stof(str);
		this->_isFloat = true;
	}
	catch (std::exception &e)
	{
	}
	try
	{
		this->_double = std::stod(str);
		this->_isDouble = true;
	}
	catch (std::exception &e)
	{
	}
}

void Converter::print()
{
	if (this->_isChar && !std::isprint(this->_char))
		std::cout << "char: Non displayable" << std::endl;
	else if (this->_isChar && std::isprint(this->_char))
		std::cout << "char: '" << this->_char << "'" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (this->_isInt)
		std::cout << "int: " << this->_int << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	if (this->_isFloat)
		std::cout << "float: " << this->_float << "f" << std::endl;
	else
		std::cout << "float: nanf" << std::endl;
	if (this->_isDouble)
		std::cout << "double: " << this->_double << std::endl;
	else
		std::cout << "double: nan" << std::endl;
}