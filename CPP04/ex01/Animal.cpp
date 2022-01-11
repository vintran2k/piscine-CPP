/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:25:15 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 15:14:50 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Undefined")
{
	std::cout << "Animal class created" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy class created" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal (" << this->_type << ") deleted" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}

Animal &	Animal::operator=(Animal const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void)
{
	std::cout << "..." << std::endl;
	return;
}
