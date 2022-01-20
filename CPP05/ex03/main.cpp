/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 22:09:01 by vintran           #+#    #+#             */
/*   Updated: 2022/01/18 13:45:54 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
		std::cout << *rrf << std::endl;
	delete rrf;
	std::cout << std::endl;

	rrf = someRandomIntern.makeForm("invalid form", "target");
	if (rrf)
		std::cout << *rrf << std::endl;
	delete rrf;
	std::cout << std::endl;
	
	rrf = someRandomIntern.makeForm("shrubbery creation", "bob");
	if (rrf)
		std::cout << *rrf << std::endl;
	delete rrf;
	std::cout << std::endl;
	
	rrf = someRandomIntern.makeForm("presidential pardon", "target");
	if (rrf)
		std::cout << *rrf << std::endl;
	delete rrf;
	
	return (0);
}
