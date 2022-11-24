/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Remp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:55:21 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/24 05:03:03 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMP_HPP
#define REMP_HPP

#include <iostream>
#include <fstream>
#include <string>

class Remp
{
private:
	std::string _inf;
	std::string _outf;

public:
	Remp();
	Remp(std::string inf);
	~Remp();
	void replace(std::string find, std::string remp);
};

#endif