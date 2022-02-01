/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:09:57 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 08:33:52 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main()
{
	std::vector<int> array;

	for (unsigned int i = 0; i < 10; i++)
		array.push_back(i);
	for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
		std::cout << *it << " ";

	std::cout << std::endl;


	std::cout << std::endl << "Valid value:" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(array, 6);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	

	std::cout << std::endl << "Invalid value:" << std::endl;
	try
	{
		std::vector<int>::iterator it = easyfind(array, 12);
		std::cout << *it << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
