/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:01 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:08:21 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	boss("boss", 1);
	Bureaucrat	stagiaire("stagiaire", 145);
	Form *form = new ShrubberyCreationForm("trees");

	std::cout << *form << std::endl;
	boss.signForm(*form);
	std::cout << *form << std::endl;
	boss.executeForm(*form);
	stagiaire.executeForm(*form);
	delete form;

	std::cout << std::endl;
	
	form = new RobotomyRequestForm("newTarget");
	boss.executeForm(*form);
	boss.signForm(*form);
	stagiaire.executeForm(*form);
	boss.executeForm(*form);
	delete form;

	std::cout << std::endl;

	form = new PresidentialPardonForm("Bob");
	stagiaire.signForm(*form);
	boss.executeForm(*form);
	boss.signForm(*form);
	form->execute(boss);
	delete form;

	return (0);
}
