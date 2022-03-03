/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:15:30 by vintran           #+#    #+#             */
/*   Updated: 2022/03/03 14:24:34 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) : _name(name), _grade(grade)
{
	if (this->_grade > 150)
	{
		this->_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
	if (this->_grade < 1)
	{
		this->_grade = 1;
		throw Bureaucrat::GradeTooHighException();
	}
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name(src._name)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

std::string const		Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int			Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		//	_name can't be assigned as it is const
		//	this->_name = rhs.getName();
		this->_grade = rhs.getGrade();
	}
	return (*this);
}

void			Bureaucrat::increaseGrade(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	return ;
}

void			Bureaucrat::decreaseGrade(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return ;
}

void				Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs form " << form.getName() << "." << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << this->_name << "  cannot sign because: " << e.what() << std::endl;
	}
	return ;
}

void				Bureaucrat::executeForm(Form const & form)
{
	if (form.execute(*this) == true)
		std::cout << this->_name << " executs " << form.getName() << "." << std::endl;
	else
		std::cerr	<< this->_name << " can not execute " << form.getName() << "." << std::endl;
	return ;
}

std::ostream &		operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
