/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 08:57:03 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/07 19:13:38 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;

    std::cout << "wrongAnimal and wrongCat------------------" << std::endl;
    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongCat *wrongCat = new WrongCat();

    wrongAnimal->makeSound();
    wrongCat->makeSound();

    delete wrongAnimal;
    delete wrongCat;
    
    return 0;
}