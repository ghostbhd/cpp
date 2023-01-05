/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouhmad <abouhmad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:33:51 by ghost             #+#    #+#             */
/*   Updated: 2023/01/05 22:47:55 by abouhmad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy), _target(copy._target)
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    if (this != &copy)
    {
        this->_target = copy._target;
    }
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute (Bureaucrat const & execute) const
{
    if (this->getSigned() == false)
        throw Form::FormNotSignedException();
    else if (execute.getGrade() > this->getGradeToExecute())
        throw Form::GradeTooLowException();
    
    std::ofstream file(this->_target + "_shrubbery");
    file << "               /!)" << std::endl;
    file << "              /  P}" << std::endl;
    file << "             #    KJ" << std::endl;
    file << "            /@     F1 " << std::endl;
    file << "           :; **    Wq" << std::endl;
    file << "          {HELLO}+   <}" << std::endl;
    file << "         `?      !~%7&%+" << std::endl;
    file << "        0  O<_=-       !1" << std::endl;
    file << "       1+        $#8()  &7" << std::endl;
    file << "      }{       O         1~" << std::endl;
    file << "     }@         OOOooOOP  :0" << std::endl;
    file << "    !!           O          '}" << std::endl;
    file << "   !_##JuST_mE12w)@@9@#((-_+#O<" << std::endl;
    file << "       |  |  |  0 |       |  " << std::endl;
    file << "       O  O  |   0|       O  " << std::endl;
    file << "             |  1 |" << std::endl;
    file << "             |0___|" << std::endl;
    file.close();
}