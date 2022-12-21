/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 20:56:42 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/21 16:42:55 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &scav);
    ~ScavTrap();

    ScavTrap &operator=(ScavTrap const &scav);
    
    void attack(std::string const &target);
    void guardGate();
};

#endif