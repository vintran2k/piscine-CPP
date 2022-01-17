/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:24:19 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 16:15:24 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const & src)
{
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &	Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

AMateria *	Cure::clone() const
{
	AMateria *	cure = new Cure;
	return (cure);
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
