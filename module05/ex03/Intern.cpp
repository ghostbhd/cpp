/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 23:54:05 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/06 00:06:28 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &src)
{
	(void)src;
}

Intern &Intern::operator=(Intern const &b)
{
	(void)b;
	return (*this);
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string formName, std::string target)
{
	Form *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (form[i]);
		}
	}
	std::cout << "Intern can't create " << formName << std::endl;
	return (NULL);
}