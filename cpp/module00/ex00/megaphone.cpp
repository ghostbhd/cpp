/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:44:22 by abouhmad          #+#    #+#             */
/*   Updated: 2022/09/07 20:53:17 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <iostream>

int main(int ac, char **av)
{
	int i = 0;
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			while (av[j][i])
				putchar(toupper(av[j][i++]));
			i = 0;
		}
		putchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
