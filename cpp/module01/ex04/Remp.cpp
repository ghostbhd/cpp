/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Remp.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:56:48 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/24 04:56:13 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Remp.hpp"

Remp::Remp()
{
}

Remp::Remp(std::string inf) : _inf(inf)
{
    this->_outf = inf + ".replace";
}

Remp::~Remp()
{
}

void Remp::replace(std::string find, std::string remp)
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
                content.insert(pos, remp);
                pos = content.find(find);
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