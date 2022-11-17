/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 02:20:04 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/17 02:23:08 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void    announce(void);
    Zombie  *setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif