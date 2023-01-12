/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:36:17 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/11 22:38:15 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
int easyfind(T &container, int n)
{
    typename T::iterator it = std::find(container.begin(), container.end(), n);
    if (it == container.end())
        throw std::exception();
    return *it;
}

#endif