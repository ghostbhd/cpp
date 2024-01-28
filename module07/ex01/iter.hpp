/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:48:14 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/09 11:57:10 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>

void iter(T *array, size_t len, void (*f)(T const &))
{
    for (size_t i = 0; i < len; i++)
        f(array[i]);
}

template <typename T>

void show(T const &x)
{
    std::cout << ":> " << x << std::endl;
}

#endif