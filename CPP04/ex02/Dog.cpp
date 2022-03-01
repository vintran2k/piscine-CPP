/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:33 by vintran           #+#    #+#             */
/*   Updated: 2022/03/01 15:04:20 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog class created" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain;
	return ;
}

Dog::Dog(Dog const & src) : AAnimal()
{
	std::cout << "Dog copy class created" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog class deleted" << std::endl;
	delete this->_brain;
	return ;
}

Dog &		Dog::operator=(Dog const & rhs)
{
	if (this != &rhs)
	{
		this->_type = rhs.getType();
		this->_brain = new Brain(*rhs._brain);
	}
	return (*this);
}

void		Dog::makeSound(void)
{
	std::cout << "Woof woof" << std::endl;
	return;
}

Brain &		Dog::getBrain(void) const
{
	return (*this->_brain);
}
