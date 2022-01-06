/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:43:21 by vintran           #+#    #+#             */
/*   Updated: 2022/01/06 09:24:34 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	Joe("Joe");
	ClapTrap	Ray("Ray");
	ClapTrap	Bob("Bob");

	Joe.setAttackDamage(10);
	Ray.setAttackDamage(40);

	std::cout	<< std::endl
				<< "Joe:	"	<< "HP -> " << Joe.getHitPoints()
								<< "     ENERGY -> " << Joe.getEnergyPoints()
								<< "     ATTACK -> " << Joe.getAttackDamage() << std::endl
				<< "Ray:	"	<< "HP -> " << Ray.getHitPoints()
								<< "     ENERGY -> " << Ray.getEnergyPoints()
								<< "     ATTACK -> " << Ray.getAttackDamage() << std::endl
				<< "Bob:	"	<< "HP -> " << Bob.getHitPoints()
								<< "     ENERGY -> " << Bob.getEnergyPoints()
								<< "     ATTACK -> " << Bob.getAttackDamage() << std::endl << std::endl;

	Ray.attack("Joe");
	Joe.takeDamage(Ray.getAttackDamage());
	
	std::cout << std::endl;
	
	Bob.beRepaired(70);
	std::cout << "Bob:	"	<< "HP -> " << Bob.getHitPoints() << std::endl;

	std::cout << std::endl;

	Bob.attack("Ray");
	Ray.takeDamage(Bob.getAttackDamage());
	Ray.attack("Bob");
	Bob.takeDamage(Ray.getAttackDamage());
	Ray.attack("Bob");
	Bob.takeDamage(Ray.getAttackDamage());

	std::cout << std::endl;

	ScavTrap	Zer("Zer");
	Zer.attack("Ray");
	Ray.takeDamage(Zer.getAttackDamage());
	Zer.guardGate();

	std::cout << std::endl;

	FragTrap	Ben("Ben");
	for (int i = 0; i < 5; i++)
	{
		Ben.attack("Zer");
		Zer.takeDamage(Ben.getAttackDamage());
	}
	Ben.highFivesGuys();

	std::cout << std::endl;
	
	return (0);
}
