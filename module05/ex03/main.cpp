/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:12:32 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/06 00:05:07 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
	try
	{
		Intern intern;
		Bureaucrat bureaucrat("bureaucrat", 1);
		Form *form = intern.makeForm("shrubbery creation", "lwal");
		std::cout << *form << std::endl;
		form->beSigned(bureaucrat);
		form->execute(bureaucrat);
		delete form;
		form = intern.makeForm("robotomy request", "ttanii");
		std::cout << *form << std::endl;
		form->beSigned(bureaucrat);
		form->execute(bureaucrat);
		delete form;
		form = intern.makeForm("presidential pardon", "ttalt");
		std::cout << *form << std::endl;
		form->beSigned(bureaucrat);
		form->execute(bureaucrat);
		delete form;
		form = intern.makeForm("presidential pardon", "ttalt");
		std::cout << *form << std::endl;
		form->beSigned(bureaucrat);
		form->execute(bureaucrat);
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	system("leaks form");
}