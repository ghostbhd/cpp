/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 14:02:37 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/10 18:58:39 by abouhmad         ###   ########.fr       */
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
		: _array(new T()), _size(0)
	{
	}
	Array(unsigned int n)
		: _array(new T[n]()), _size(n)
	{
	}
	Array(Array const &src)
		: _array(new T[src._size]()), _size(src._size)
	{
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = src._array[i];
	}

	Array &operator=(Array const &rhs)
	{
		if (this != &rhs)
		{
			delete[] _array;
			_array = new T[rhs._size]();
			_size = rhs._size;
			for (unsigned int i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return *this;
	}

	T &operator[](unsigned int i)
	{
		if (i >= _size)
			throw std::exception();
		return _array[i];
	}

	~Array()
	{
		delete[] _array;
	}
};

template <typename T>
std::ostream &operator<<(std::ostream &o, Array<T> const &i)
{
	o << i.getValue();
	return o;
}

#endif