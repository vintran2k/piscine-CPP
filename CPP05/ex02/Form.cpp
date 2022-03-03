/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 06:33:13 by vintran           #+#    #+#             */
/*   Updated: 2022/03/03 14:24:13 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Undefined"), _signed(false), _signGrade(150), _execGrade(150), _target("Undefined")
{
	return ;
}

Form::Form(std::string const name, unsigned int signGrade, unsigned int execGrade, std::string target) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade), _target(target)
{
	return ;
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade), _target(src._target)
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

std::string const	Form::getTarget(void) const
{
	return (this->_target);
}

Form &	Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
		this->_target = rhs.getTarget();
	}
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

bool		Form::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw Form::UnsignedFormException();
	if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	return (true);
}

std::ostream &		operator<<(std::ostream & o, Form const & rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSigned())
		o << " is signed.";
	else
		o << " is not signed.";
	o	<< " Grade required for signature: " << rhs.getSignGrade() << "."
		<< " Grade required for execution: " << rhs.getExecGrade() << "."
		<< " Target: " << rhs.getTarget();
	return (o);
}
