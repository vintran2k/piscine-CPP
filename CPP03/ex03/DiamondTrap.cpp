/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:32:35 by vintran           #+#    #+#             */
/*   Updated: 2022/01/06 10:15:35 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "A stranger DiamondTrap spawn!" << std::endl;
    ClapTrap::_name = "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "DiamondTrap " << name << " spawn!" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " died!" << std::endl;
	return ;
}

DiamondTrap &		DiamondTrap::operator=(DiamondTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
        this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void	DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
    return ;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "I' m " << this->_name << " and my ClapTrap name is " << this->ClapTrap::_name << std::endl;
    return ;
}