/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:55:14 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/24 17:46:15 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		Rep rep(av[1]);
		rep.replace(av[2], av[3]);
	}
	else
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return (1);
	}

	return (0);
}