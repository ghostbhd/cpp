/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:52:34 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/09 11:59:33 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int tab[] = {0, 1, 2, 3, 4, 5};
	iter(tab, sizeof(tab) / sizeof(tab[0]), show);
	return 0;
}