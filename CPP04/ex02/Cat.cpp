/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:41 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 18:01:25 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat class created" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat(Cat const & src)
{
	std::cout << "Cat copy class created" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat class deleted" << std::endl;
	delete this->_brain;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaouu" << std::endl;
	return ;
}

Brain &		Cat::getBrain(void) const
{
	return (*this->_brain);
}

