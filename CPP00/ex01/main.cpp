/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:11:20 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 16:54:51 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.class.hpp"

int	main()
{
	std::string		input;
	Phonebook		book;

	while (!std::cin.eof())
	{
		book.prompt();
		getline(std::cin, input);
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else if (!input.empty())
			std::cout << "Error: invalid command" << std::endl;
	}
	return (0);
}
