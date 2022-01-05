/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:03:49 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 16:53:22 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const type) : _type(type)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const &		Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
	return ;
}
