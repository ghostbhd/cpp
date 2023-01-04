/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:56:35 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/03 22:07:22 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _gradeToSign;
	int const _gradeToExecute;
	Form();

public:
	Form(std::string const &name, int gradeToSign, int gradeToExecute);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &form);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &b);
	virtual void execute(Bureaucrat const & executor) const = 0;

	// Exceptions -------------------------------------------------
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return ("Grade too high"); }
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return ("Grade too low"); }
	};
};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif