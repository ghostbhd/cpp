/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:19:34 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/17 05:28:23 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int N = 6;
    Zombie *zombie = zombieHorde(N, "satoru");
    
    for (int i = 0; i < N; i++)
        zombie[i].announce();
        
    delete[] zombie;
    
    return 0;
}
