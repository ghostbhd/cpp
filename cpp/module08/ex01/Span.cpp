/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:37:11 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/13 22:37:52 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _n(0), _size(0), _tab(NULL)
{
}

Span::Span(unsigned int n) : _n(n), _size(0), _tab(new int[n])
{
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
    delete[] _tab;
}

Span &Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        _n = rhs._n;
        _size = rhs._size;
        _tab = new int[_n];
        for (unsigned int i = 0; i < _size; i++)
            _tab[i] = rhs._tab[i];
    }
    return *this;
}

void Span::addNumber(int n)
{
    if (_size == _n)
        throw std::exception();
    _tab[_size] = n;
    _size++;
}

int Span::shortestSpan()
{
    if (_size < 2)
        throw std::exception();
    int min = INT_MAX;
    for (unsigned int i = 0; i < _size; i++)
    {
        for (unsigned int j = i + 1; j < _size; j++)
        {
            int diff = _tab[i] - _tab[j];
            if (diff < 0)
                diff = -diff;
            if (diff < min)
                min = diff;
        }
    }
    return min;
}

int Span::longestSpan()
{
    if (_size < 2)
        throw std::exception();
    int min = INT_MAX;
    int max = INT_MIN;
    for (unsigned int i = 0; i < _size; i++)
    {
        if (_tab[i] < min)
            min = _tab[i];
        if (_tab[i] > max)
            max = _tab[i];
    }
    return max - min;
}
