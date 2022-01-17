/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:27:47 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 16:14:01 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("Undefined")
{
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

std::string const &	AMateria::getType(void) const
{
	return (this->_type);
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void		AMateria::use(ICharacter& target)
{
	std::cout << "Default use: Don't do anything to " << target.getName() << std::endl;
	return ;
}
