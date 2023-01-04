/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:19:26 by abouhmad          #+#    #+#             */
/*   Updated: 2023/01/03 22:09:34 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src.getName()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute()) {}

Form &Form::operator=(Form const &form)
{
    this->_signed = form.getSigned();
    return (*this);
}

Form::~Form() {}

std::string Form::getName() const { return (this->_name); }

bool Form::getSigned() const { return (this->_signed); }

int Form::getGradeToSign() const { return (this->_gradeToSign); }

int Form::getGradeToExecute() const { return (this->_gradeToExecute); }

void Form::beSigned(const Bureaucrat &b)
{
    if (b.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &form)
{
    o << ">> Form informations" << std::endl;
    o << "Name : " << form.getName() << std::endl
      << "Grade to signed : " << form.getGradeToSign() << std::endl
      << "Grade to execute : " << form.getGradeToExecute() << std::endl;
    return (o);
}
