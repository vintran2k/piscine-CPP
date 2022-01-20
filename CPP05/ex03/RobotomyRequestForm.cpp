/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:22:52 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:35:42 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy request", 72, 45, "Undefined")
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45, target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return (*this);
}

bool				RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	rand;

	try
	{
		Form::execute(executor);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return (false);
	}
	std::cout << "*DRILL NOISES* BRRRRRRRR" << std::endl;
	std::srand(std::time(NULL));
	rand = std::rand() % 2;
	if (rand)
		std::cout << this->_target << " has been robotomized !" << std::endl;
	else
		std::cout << "FAILURE.." << std::endl;
	return (true);
}
