/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:31:16 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 17:30:40 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	std::cout << _name << " died" << std::endl;
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << _name << " attacks with their ";
	if (_weapon)
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "hands" << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
	return ;
}
