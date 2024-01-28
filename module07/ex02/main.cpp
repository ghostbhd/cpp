/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 11:54:00 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/11 02:14:53 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Attay.hpp"

int main()
{
    Array<int> b(5);

    try
    {
        for (int i = 0; i < 5; i++)
            b[i] = i;
        Array<int> a(b);
        b[4] = 42;
        for (int i = 0; i < 5; i++)
            std::cout << a[i] << std::endl;
        for (int i = 0; i < 5; i++)
            std::cout << b[i] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}