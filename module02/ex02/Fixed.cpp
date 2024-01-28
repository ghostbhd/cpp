/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:18 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/04 14:55:53 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointNbr = 0;
}

Fixed::Fixed(const int nbr)
{
	this->_fixedPointNbr = nbr << this->_fractionalBits;
}

Fixed::Fixed(const float nbr)
{
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
	this->_fixedPointNbr = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

//------------------------------------------------------------
//                    Operators
//------------------------------------------------------------

// Comparison ---------------------------------------------------------
bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->_fixedPointNbr > fixed.getRawBits());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->_fixedPointNbr < fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_fixedPointNbr < fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_fixedPointNbr < fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->_fixedPointNbr < fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_fixedPointNbr < fixed.getRawBits());
}

// Arithmetic ---------------------------------------------------------
Fixed Fixed::operator+(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

// Increment and decrement ---------------------------------------------

Fixed &Fixed::operator++()
{
	++this->_fixedPointNbr;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed fxd(*this);
	fxd._fixedPointNbr = this->_fixedPointNbr++;
	return (fxd);
}

Fixed &Fixed::operator--()
{
	--this->_fixedPointNbr;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed fxd(*this);
	fxd._fixedPointNbr = this->_fixedPointNbr--;
	return (fxd);
}

//------------------------------------------------------------
//                    Min and Max
//------------------------------------------------------------
Fixed &Fixed::min(Fixed &x, Fixed &y)
{
	return (x < y ? x : y);
}
const Fixed &Fixed::min(const Fixed &x, const Fixed &y)
{
	return (x < y ? x : y);
}

Fixed &Fixed::max(Fixed &x, Fixed &y)
{
	return (x > y ? x : y);
}

const Fixed &Fixed::max(const Fixed &x, const Fixed &y)
{
	return (x > y ? x : y);
}
