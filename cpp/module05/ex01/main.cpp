/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:12:32 by abouhmad          #+#    #+#             */
/*   Updated: 2022/12/09 19:49:23 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat br("br", 150);
	
	br.incrementGrade();
	std::cout << br;

	try
	{
		Bureaucrat b("b", 0);
		Form f("f", 2);
		b.signForm(f);
		std::cout << f;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b("b", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
}