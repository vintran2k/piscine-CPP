/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:01 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 23:40:15 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat low("low", 150);
		try
		{
			low.decreaseGrade();
			std::cout << low << std::endl;	// cette ligne ne va pas etre executee car il y a l'exception gradeTooLowException
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << low << std::endl;
		}
	
		try
		{
			low.increaseGrade();
			std::cout << low << std::endl;
		}
		catch (const std::exception &e)		//	ici rien a ete "catch"
		{
			std::cerr << e.what() << std::endl;
			std::cout << low << std::endl;
		}
		std::cout << std::endl;
	}

	{
		Bureaucrat high("high", 1);
		try
		{
			high.increaseGrade();
			std::cout << high << std::endl;	// cette ligne ne va pas etre executee car il y a l'exception gradeTooHighException
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
			std::cout << high << std::endl;
		}
	
		try
		{
			high.decreaseGrade();
			std::cout << high << std::endl;
		}
		catch (const std::exception &e)		//	ici rien a ete "catch"
		{
			std::cerr << e.what() << std::endl;
			std::cout << high << std::endl;
		}
		std::cout << std::endl;
	}

	return (0);
}
