/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:21:38 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:47:21 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & src)
{
	(void) src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern &	Intern::operator=(Intern const & rhs)
{
	(void) rhs;
	return (*this);
}

Form *			Intern::makeForm(std::string name, std::string target)
{
	Form *	src[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	int		save = -1;
	
	for (int i = 0; i < 3; i++)
	{
		if (name == src[i]->getName())
		{
			save = i;
			break ;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (i != save)
			delete src[i];
	}
	if (save == -1)
	{
		std::cerr << "Invalid Form to create" << std::endl;
		return (NULL);
	}
	std::cout << "Intern creates " << name << std::endl;
	return (src[save]);
}
