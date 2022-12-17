/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rep.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:56:48 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/16 00:30:53 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Rep.hpp"

Rep::Rep()
{
}

Rep::Rep(std::string inf) : _inf(inf)
{
	this->_outf = inf + ".replace";
}

Rep::~Rep()
{
}

void Rep::replace(std::string find, std::string rp)
{
	std::ifstream inf(this->_inf);
	std::string content;

	if (inf.is_open())
	{
		std::ofstream outf(this->_outf);
		if (std::getline(inf, content, '\0'))
		{
			size_t pos = content.find(find);
			while (pos != std::string::npos)
			{
				content.erase(pos, find.length());
				content.insert(pos, rp);
				pos = content.find(find, pos + rp.length());
			}
			outf << content;
		}
		else
			std::cout << "Error: file is empty" << std::endl;
		outf.close();
		inf.close();
	}
	else
	{
		std::cout << "Error: file not found" << std::endl;
		exit(1);
	}
}