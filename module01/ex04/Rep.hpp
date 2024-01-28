/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:55:21 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/24 17:44:31 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REP_HPP
#define REP_HPP

#include <iostream>
#include <fstream>
#include <string>

class Rep
{
private:
	std::string _inf;
	std::string _outf;

public:
	Rep();
	Rep(std::string inf);
	~Rep();
	void replace(std::string find, std::string rp);
};

#endif