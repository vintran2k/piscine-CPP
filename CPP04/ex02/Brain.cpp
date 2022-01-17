/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:07:22 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 17:29:41 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = '0';
	return ;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

std::string		Brain::getIdea(unsigned int index) const
{
	return (this->_ideas[index]);
}

void			Brain::setIdea(unsigned int index, std::string idea)
{
	this->_ideas[index] = idea;
	return;
}

Brain &			Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdea(i);
	}
	return (*this);
}

void			Brain::printIdeas(void) const
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << this->_ideas[i];
		if (i != 99)
			std::cout << " ";
	}
	std::cout << std::endl;
	return ;
}
