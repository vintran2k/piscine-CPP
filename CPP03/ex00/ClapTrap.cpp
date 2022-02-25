/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:11:17 by vintran           #+#    #+#             */
/*   Updated: 2022/02/25 17:17:35 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "A stranger ClapTrap spawn!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->_name << " is spawn!" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Another " << src._name << " is spawn!" <<  std::endl;
	*this = src;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
	return ;
}

std::string		ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void			ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

ClapTrap &		ClapTrap::operator=(ClapTrap const & rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

void		ClapTrap::attack(std::string const & target)
{
	if (this->_hitPoints < 1)
		return ;
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left !" << std::endl;
		return ;
	}
	std::cout	<< "ClapTrap " << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	return ;
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is already KO !" << std::endl;
		return ;
	}
	if (amount >= this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " is KO!" << std::endl;
		this->_hitPoints = 0;
		return ;
	}
	std::cout	<< "ClapTrap " << _name << " take " << amount
				<< " points of damage!" << std::endl;
	this->_hitPoints -= amount;
	return ;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
		return ;
	if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " has no energy points left !" << std::endl;
		return ;
	}
	if (this->_hitPoints == 100)
		return ;
	if (this->_hitPoints + amount > 100)
		amount = 100 - this->_hitPoints;
	std::cout << amount << " hit points have been added to Claptrap " << this->_name << "!" << std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	return ;
}
