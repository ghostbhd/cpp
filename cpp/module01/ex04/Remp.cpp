/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Remp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:56:48 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/22 12:51:05 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Remp.hpp"

Remp::Remp()
{
}

Remp::Remp(std::string inf, std::string outf) : _inf(inf), _outf(outf)
{
}

Remp::~Remp()
{
}

void Remp::replace(std::string s1, std::string s2)
{
    std::ifstream ifs(this->_inf);
    std::ofstream ofs(this->_outf);
    std::string line;
    size_t pos;

    if (ifs.is_open() && ofs.is_open())
    {
        while (getline(ifs, line))
        {
            while ((pos = line.find(s1)) != std::string::npos)
            {
                line.replace(pos, s1.length(), s2);
            }
            ofs << line << std::endl;
        }
    }
    else
    {
        std::cout << "Error: file not found" << std::endl;
    }
    ifs.close();
    ofs.close();
}