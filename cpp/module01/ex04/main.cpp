/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:55:14 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/24 05:02:06 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Remp.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		Remp remp(av[1]);
		remp.replace(av[2], av[3]);
	}
	else
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}

	return (0);
}