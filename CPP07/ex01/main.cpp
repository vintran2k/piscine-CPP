/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 22:15:18 by vintran           #+#    #+#             */
/*   Updated: 2022/01/31 22:35:09 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	{
		int		array[5] = {1, 2, 3, 4, 5};
		
		iter(array, 5, print);
	}
	std::cout << std::endl;
	{
		float	array[3] = {3445.213, 7.12, 60.75};

		iter(array, 3, print);
	}
	std::cout << std::endl;
	{
		char	array[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};

		iter(array, 8, print);
	}
	std::cout << std::endl;
	{
		std::string	array[2] = {"Hello", "world !"};

		iter(array, 2, print);
	}
	std::cout << std::endl;

	return (0);
}
