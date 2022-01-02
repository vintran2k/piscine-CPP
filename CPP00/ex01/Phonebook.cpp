/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:39:56 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:18:18 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : n(0)
{
	std::cout << std:: endl <<  "***************    PHONEBOOK    ***************" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << std:: endl <<  "                  SEE YOU SOON :)" << std::endl;
	return ;
}

void	Phonebook::prompt(void)
{
	std::cout << std::endl << "[ADD | SEARCH | EXIT]:\n\n" << "> ";
}

void	Phonebook::display(void)
{
	std::cout	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 1; i <= this->n; i++)
		this->contacts[i - 1].display1(i);
}

void	Phonebook::add(void)
{
	std::string	input;
	int			id = -1;

	if (this->n >= 8)
	{
		std::cout	<< "! Phonebook is full" << std::endl;
		this->display();
		while (!std::cin.eof())
		{
			std::cout << std::endl << "Select a contact index you want to replace (leave empty to return menu): ";
			std::getline(std::cin, input);
			if (input.empty())
			{
				std::cout << "Back to main menu" << std::endl;
				break ;
			}
			id = std::atoi(input.c_str());
			if (id <= this->n && id > 0)
				return (this->contacts[id - 1].add());
			std::cout << "Invalid index" << std::endl;
		}
		return ;
	}
	this->contacts[n].add();
	this->n++;
	return ;
}

void	Phonebook::search(void)
{
	std::string input;
	int			id = -1;
	
	if (!this->n)
	{
		std::cout << "! Phonebook is empty, nothing to display" << std::endl;
		return ;
	}
	this->display();
	while (!std::cin.eof())
	{
		std::cout << std::endl << "Select a contact index (leave empty to return menu): ";
		std::getline(std::cin, input);
		if (input.empty())
		{
			std::cout << "Back to main menu" << std::endl;
			break ;
		}
		id = std::atoi(input.c_str());
		if (id <= this->n && id > 0)
			return (this->contacts[id - 1].display2());
		std::cout << "Invalid index" << std::endl;
	}
	return ;
}
