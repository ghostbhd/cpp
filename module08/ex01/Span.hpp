/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:36:01 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/14 00:39:48 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>

class Span
{
private:
    unsigned int _n;
    unsigned int _size;
    int *_tab;

public:
    Span();
    Span(unsigned int n);
    Span(Span const &src);
    ~Span();

    Span &operator=(Span const &rhs);

    void addNumber(int n);
    void addNumber(std::list<int>::iterator begin, std::list<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};

#endif