/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 08:53:38 by vintran           #+#    #+#             */
/*   Updated: 2022/01/06 09:15:49 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "A stranger FragTrap spawn!" << std::endl;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap " << name << " spawn!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " died!" << std::endl;
	return ;
}

FragTrap &		FragTrap::operator=(FragTrap const & rhs)
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

void	FragTrap::attack(std::string const & target)
{
	std::cout	<< "FragTrap " << this->_name << " attacks " << target
				<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << " says high fives Guys!" << std::endl;
	return ;
}
