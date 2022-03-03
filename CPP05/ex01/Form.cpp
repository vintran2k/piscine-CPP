/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:33:13 by vintran           #+#    #+#             */
/*   Updated: 2022/03/03 14:23:54 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Undefined"), _signed(false), _signGrade(150), _execGrade(150)
{
	return ;
}

Form::Form(std::string const name, unsigned int signGrade, unsigned int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	return ;
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::~Form(void)
{
	return ;
}

std::string const	Form::getName(void) const
{
	return (this->_name);
}

bool				Form::getSigned(void) const
{
	return (this->_signed);
}

unsigned int		Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

unsigned int		Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
		this->_signed = rhs._signed;
		//	const values
	return (*this);
}

void				Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		std::cout << "Form " << this->_name << " is already signed." << std::endl;
	else
		this->_signed = true;
	return ;
}

std::ostream &		operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed.";
	else
		o << " is not signed.";
	o	<< " Grade required for signature: " << rhs.getSignGrade() << "."
		<< " Grade required for execution: " << rhs.getExecGrade() << ".";
	return (o);
}
