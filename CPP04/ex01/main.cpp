/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:32:58 by vintran           #+#    #+#             */
/*   Updated: 2022/03/01 18:48:32 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	{
		Animal *tab[10];
		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				tab[i] = new Dog();
			else
				tab[i] = new Cat();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			tab[i]->makeSound();
		}
		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
			delete tab[i];
	}
	
	{
		Animal	*meta = new Animal();
		Animal	*dog = new Dog();
		Animal	*cat = new Cat();

		std::cout << std::endl;

		std::cout << "dog brain: " << std::endl;
		static_cast<Dog *>(dog)->getBrain().printIdeas();

		static_cast<Dog *>(dog)->getBrain().setIdea(5, "manger");
		std::cout << "dog brain: " << std::endl;
		static_cast<Dog *>(dog)->getBrain().printIdeas();
	
		std::cout << std::endl;
		Dog dog2(*static_cast<Dog *>(dog));
		std::cout << std::endl;
	
		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();

		dog2.getBrain().setIdea(10, "boire");
		std::cout << "dog2 brain: " << std::endl;
		dog2.getBrain().printIdeas();
	
		std::cout << std::endl;
	
		std::cout << "dog brain: " << std::endl;
		static_cast<Dog *>(dog)->getBrain().printIdeas();
	
		std::cout << std::endl;

	
		std::cout << "cat brain: " << std::endl;
		static_cast<Cat *>(cat)->getBrain().printIdeas();

		static_cast<Cat *>(cat)->getBrain().setIdea(12, "jouer");
		std::cout << "cat brain: " << std::endl;
		static_cast<Cat *>(cat)->getBrain().printIdeas();
	
		std::cout << std::endl;
		Cat cat2(*static_cast<Cat *>(cat));
		std::cout << std::endl;
	
		std::cout << "cat2 brain: " << std::endl;
		cat2.getBrain().printIdeas();

		cat2.getBrain().setIdea(1, "dormir");
		std::cout << "cat2 brain: " << std::endl;
		cat2.getBrain().printIdeas();
	
		std::cout << std::endl;
	
		std::cout << "cat brain: " << std::endl;
		static_cast<Cat *>(cat)->getBrain().printIdeas();

		std::cout << std::endl;

		delete meta;
		delete dog;
		delete cat;
	}

	return (0);
}
