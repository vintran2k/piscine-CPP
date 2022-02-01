/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:40:20 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 12:42:22 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>
#include <cstdlib>

int randomNumber(void)
{
	return (std::rand() % 100);
}

int	main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl;
	std::srand(time(NULL));

	{
		Span    array(10000);

		std::srand(time(NULL));
		try
		{
			std::cout << array.shortestSpan() << std::endl;
		}
		catch (std::exception & e)		//	tableau vide
		{
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl;

		try
		{
			std::vector<int>            random(5000);
			std::vector<int>::iterator  start = random.begin();
			std::vector<int>::iterator  end = random.end();
			std::generate(start, end, randomNumber);
			array.addRange(start, end);

			std::cout << array << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	
	std::cout << std::endl;
	
	{
		Span	array(10);

		try
		{
			std::vector<int>            random(3);
			std::vector<int>::iterator  start = random.begin();
			std::vector<int>::iterator  end = random.end();
			std::generate(start, end, randomNumber);
			array.addRange(start, end);

			std::cout << array << std::endl;
		
			std::vector<int>            newRandom(5);
			start = newRandom.begin();
			end = newRandom.end();
			std::generate(start, end, randomNumber);
			array.addRange(start, end);

			std::cout << array << std::endl << std::endl;
			
			Span	newArray(array);
			std::cout << newArray << std::endl << std::endl;
			newArray.addNumber(1);
			newArray.addNumber(2);

			std::cout << "array: " << array << std::endl << std::endl;
			std::cout << "newArray: " << newArray << std::endl << std::endl;

			std::cout << newArray.longestSpan() << std::endl;
			std::cout << newArray.shortestSpan() << std::endl;

			newArray.addNumber(3);	// Plus de place dans newArray
		}
		catch (std::exception & e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	return (0);
}
