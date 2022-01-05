/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:57:26 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 15:36:53 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
	Zombie	*horde;
	int		N;

	if (ac != 2)
	{
		std::cout << "Please, specify the number of zombies you want to create!" << std::endl;
		return (1);
	}

	N = std::atoi(av[1]);
	if (N > 0)
	{
		horde = zombieHorde(N, "Joe");
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete [] horde;
	}
	return (0);
}
