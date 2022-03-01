/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:41 by vintran           #+#    #+#             */
/*   Updated: 2022/03/01 14:12:57 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat class created" << std::endl;
	this->_type = "Cat";
	return ;
}

Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat copy class created" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat class deleted" << std::endl;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "Miaouu" << std::endl;
	return ;
}
