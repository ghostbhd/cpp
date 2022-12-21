/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:38:51 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/20 13:58:53 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ScavTrap boss("boss");
    boss.attack("employee");
    boss.guardGate();
    
    std::cout << "\n------------------------\n" << std::endl;
    
    FragTrap employee("employee2");
    employee.attack("boss2");
    employee.highFivesGuys();
    
    std::cout << "\n------------------------\n" << std::endl;
    
    return 0;
}