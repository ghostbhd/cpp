/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 16:12:15 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/30 02:22:09 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixedPointNbr;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();

    Fixed &operator = (const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif