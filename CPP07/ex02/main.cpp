/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 05:53:27 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 07:04:21 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main()
{
	std::cout << "==========    INT    ==========" << std::endl;
	{
		Array<int>  array(5);
		Array<int>  copy(array);

		try {
			for (unsigned int i = 0; i < copy.size(); i++)
				copy[i] = i + 10;

			for (unsigned int i = 0; i < array.size(); i++)
				array[i] = i;

			for (unsigned int i = 0; i < array.size(); i++)
				std::cout << array[i] << " ";

			std::cout << std::endl;

			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";

			std::cout << std::endl;

			std::cout << array[6] << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	std::cout << "==========   FLOAT   ==========" << std::endl;
	{
		Array<float>    array(3);
		Array<float>	copy;
		float           floats[3] = {10.4, 3.9, 6.815};

		try {
			for (unsigned int i = 0; i < array.size(); i++)
				array[i] = floats[i];

			copy = array;

			for (unsigned int i = 0; i < array.size(); i++)
				std::cout << array[i] << " ";
			std::cout << std::endl;
			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << std::endl;

			std::cout << std::endl;

			for (unsigned int i = 0; i < array.size(); i++)
				array[i] = array[i] + 1;

			for (unsigned int i = 0; i < array.size(); i++)
				std::cout << array[i] << " ";
			std::cout << std::endl;

			for (unsigned int i = 0; i < copy.size(); i++)
				std::cout << copy[i] << " ";
			std::cout << std::endl;

			std::cout << array[10] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	
	std::cout << "==========  STRINGS  ==========" << std::endl;
	{
		Array<std::string>    array(2);

		try {
			array[0] = "Hello";
			array[1] = "World !";

			for (unsigned int i = 0; i < array.size(); i++) {
				std::cout << array[i] << " ";
			}
			std::cout << std::endl;

			std::cout << array[12] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return (0);
}
