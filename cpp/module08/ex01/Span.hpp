/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 22:36:01 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/13 22:36:19 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

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
    int shortestSpan();
    int longestSpan();
};

#endif