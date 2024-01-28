/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:06:58 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/08 00:07:19 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>

class Converter
{
private:
    int _int;
    float _float;
    double _double;
    char _char;
    bool _isChar;
    bool _isInt;
    bool _isFloat;
    bool _isDouble;

public:
    Converter();
    Converter(Converter const &src);
    ~Converter();

    Converter &operator=(Converter const &rhs);

    void convert(std::string str);
    void print();
};

#endif