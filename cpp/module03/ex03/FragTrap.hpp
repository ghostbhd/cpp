/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 13:35:10 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/20 13:41:16 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : ClapTrap
{
private:
	FragTrap();

public:
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	~FragTrap();

	FragTrap &operator=(FragTrap const &frag);

	void highFivesGuys(void);
};

#endif