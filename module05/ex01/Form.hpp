/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:56:35 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/05 23:35:48 by abouhmad         ###   ########.fr       */
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
	Form(std::string const &name, int gradeToSign);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &form);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(const Bureaucrat &b);

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
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return ("Form not signed"); }
	};
};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif