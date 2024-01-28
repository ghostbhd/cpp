/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:44:22 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/11 17:12:29 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <iostream>

int main(int ac, char **av)
{
	if (ac > 1)
	{
		for (int j = 1; j < ac; j++)
		{
			int i = 0;
			while (av[j][i])
				putchar(toupper(av[j][i++]));
		}
		putchar('\n');
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return 0;
}
