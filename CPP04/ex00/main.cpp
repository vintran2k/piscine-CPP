/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:32:58 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 15:18:08 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*meta = new Animal();
	Animal	*dog = new Dog();
	Animal	*cat = new Cat();

	std::cout	<< std::endl
				<< meta->getType() << ": ";
	meta->makeSound();
	std::cout	<< dog->getType() << ": ";
	dog->makeSound();
	std::cout	<< cat->getType() << ": ";
	cat->makeSound();

	std::cout << std::endl;

	delete meta;
	delete dog;
	delete cat;

	std::cout << std::endl;
	WrongAnimal *wrong = new WrongAnimal();
	WrongAnimal	*wrongCat = new WrongCat;
	std::cout	<< std::endl
				<< wrong->getType() << ": ";
	wrong->makeSound();
	std::cout	<< wrongCat->getType() << ": ";
	wrongCat->makeSound();

	std::cout << std::endl;
	
	delete wrong;
	delete wrongCat;
	
	return (0);
}
