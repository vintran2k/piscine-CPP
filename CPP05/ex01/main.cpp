/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:01 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 07:41:45 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
	Bureaucrat boss("boss", 1);
	Form form1("*264920*", 5, 1);
	std::cout << form1 << std::endl;
	boss.signForm(form1);
	std::cout << form1 << std::endl;
	}

	std::cout << std::endl;

	{
	Bureaucrat stagiaire("stagiaire", 145);
	Form form2("*971004", 50, 20);
	std::cout << form2 << std::endl;
	stagiaire.signForm(form2);
	std::cout << form2 << std::endl;
	}

	return (0);
}
