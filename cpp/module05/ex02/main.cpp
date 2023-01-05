/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:12:32 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/05 22:46:38 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("bureaucrat", 1);
		ShrubberyCreationForm shrubberyCreationForm("lwal");
		RobotomyRequestForm robotomyRequestForm("ttanii");
		PresidentialPardonForm presidentialPardonForm("ttalt");

		std::cout << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		std::cout << "\n------shrubbery--------" << std::endl;
		std::cout << shrubberyCreationForm << std::endl;
		shrubberyCreationForm.beSigned(bureaucrat);
		shrubberyCreationForm.execute(bureaucrat);
		std::cout << "\n------robotomy---------" << std::endl;
		std::cout << robotomyRequestForm << std::endl;
		robotomyRequestForm.beSigned(bureaucrat);
		robotomyRequestForm.execute(bureaucrat);
		std::cout << "\n------presidential-----" << std::endl;
		std::cout << presidentialPardonForm << std::endl;
		presidentialPardonForm.beSigned(bureaucrat);
		presidentialPardonForm.execute(bureaucrat);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}