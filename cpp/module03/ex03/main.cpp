/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:38:51 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/20 13:48:53 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap boss("boss");
    boss.attack("employee");
    boss.guardGate();

    FragTrap employee("employee");
    employee.attack("boss");
    employee.highFivesGuys();
    
    return 0;
}