/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:01 by vintran           #+#    #+#             */
/*   Updated: 2022/03/03 14:09:05 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat	badGrade1("Bob", 0);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		
		try
		{
			Bureaucrat	badGrade2("Paul", 154);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Bureaucrat low1("low1", 150);
			low1.decreaseGrade();
			std::cout << low1 << std::endl;	// cette ligne ne va pas etre executee car il y a l'exception gradeTooLowException
			
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	
		try
		{
			Bureaucrat low2("low2", 150);
			low2.increaseGrade();
			std::cout << low2 << std::endl;
		}
		catch (const std::exception &e)		//	ici rien a ete "catch"
		{
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	{
		try
		{
			Bureaucrat high1("high1", 1);
			high1.decreaseGrade();
			std::cout << high1 << std::endl;	//	ici rien a ete "catch"
			
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	
		try
		{
			Bureaucrat high2("high2", 1);
			high2.increaseGrade();
			std::cout << high2 << std::endl;	// cette ligne ne va pas etre executee car il y a l'exception gradeTooLowException
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
