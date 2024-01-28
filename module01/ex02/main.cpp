/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:14:27 by abouhmad          #+#    #+#             */
/*   Updated: 2022/11/18 15:15:15 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    //Pointer
    std::string *stringPTR = &str;
    //Reference
    std::string &stringREF = str;

    std::cout << "string adress    : " << &str << "value :" << str << std::endl;
    std::cout << "stringPTR adress : " << stringPTR << "value :" << *stringPTR << std::endl;
    std::cout << "stringREF adress : " << &stringREF << "value :" << stringREF << std::endl;

    return (0);
}