/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:30:41 by vintran           #+#    #+#             */
/*   Updated: 2022/03/02 17:43:16 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	
	std::cout << std::endl;
	
	Character *newMe = new Character("newMe");
	newMe->equip(tmp->clone());
	*newMe = *static_cast<Character *>(me);
	std::cout << "newMe name = " << newMe->getName() << std::endl;
	newMe->use(0, *bob);
	newMe->use(1, *me);
	newMe->use(2, *bob);
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	tmp = src->createMateria("ice");
	newMe->equip(tmp);
	tmp = src->createMateria("cure");
	newMe->equip(tmp);
	tmp = new Cure;
	newMe->equip(tmp);
	delete tmp;
	delete bob;
	delete me;
	delete src;
	delete newMe;

	
	
	std::cout << std::endl;

	AMateria *	tab = new Ice[4];
	Character	toto("toto");
	toto.equip(&tab[0]);
	toto.equip(&tab[1]);
	toto.equip(&tab[2]);
	toto.equip(&tab[3]);
	toto.unequip(0);
	toto.unequip(1);
	toto.unequip(2);
	toto.unequip(3);
	toto.unequip(0);
	delete [] tab;
	
	return (0);
}
