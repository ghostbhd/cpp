/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:18 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/01 12:09:04 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixedPointNbr = 0;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNbr = nbr << this->_fractionalBits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixedPointNbr = roundf(nbr * (1 << this->_fractionalBits));
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (this->_fixedPointNbr);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointNbr = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointNbr / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointNbr >> this->_fractionalBits);
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixedPointNbr = fixed.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
    out << fixed.toFloat();
    return (out);
}