/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Remp.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 05:55:21 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/22 12:50:10 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REMP_HPP
#define REMP_HPP

#include <iostream>
#include <string>

class Remp
{
private:
    std::string _inf;
    std::string _outf;

public:
    Remp();
    Remp(std::string inf, std::string outf);
    ~Remp();
    void replace(std::string s1, std::string s2);
};

#endif