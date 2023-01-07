/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 12:56:26 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/08 00:10:08 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

// convert a string to an integer, double, float, char, etc.
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./convert [string]" << std::endl;
        return (EXIT_FAILURE);
    }
    Converter converter;
    converter.convert(av[1]);
    converter.print();
    return (EXIT_SUCCESS);
}