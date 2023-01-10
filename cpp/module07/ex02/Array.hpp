/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:02:37 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/09 14:10:43 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
	T *_array;
	unsigned int _size;

public:
	Array()
	{
		_array = new T[0];
		_size = 0;
	}
	Array(unsigned int n)
	{
		_array = new T[n];
		_size = n;
	}
	Array(Array const &src)
	{
		*this = src;
	}
	~Array()
	{
		delete[] _array;
	}
}
#endif