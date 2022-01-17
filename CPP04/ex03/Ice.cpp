/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:22:14 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 16:14:47 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const & src)
{
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &	Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

AMateria *	Ice::clone() const
{
	AMateria *	ice = new Ice;
	return (ice);
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
