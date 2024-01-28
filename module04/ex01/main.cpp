/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 08:57:03 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/08 18:21:21 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "stdlib.h"

int main()
{
    Animal *animal[6] = {new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat()};
    for (int i = 0; i < 6; i++)
        delete animal[i];

    //---------------------------------------------
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    delete j;
    delete i;

    return 0;
}