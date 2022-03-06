/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:39:56 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:20:02 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void) : _n(0), _oldest(0)
{
	std::cout << std:: endl <<  "***************    PHONEBOOK    ***************" << std::endl;
	return ;
}

Phonebook::~Phonebook(void)
{
	std::cout << std:: endl <<  "                  ***************    PHONEBOOK EXITED    ***************" << std::endl;
	return ;
}

void	Phonebook::prompt(void)
{
	std::cout << std::endl << "[ADD | SEARCH | EXIT]:\n\n" << "> ";
}

void	Phonebook::_display(void)
{
	std::cout	<< std::setw(10) << "index" << "|"
				<< std::setw(10) << "first name" << "|"
				<< std::setw(10) << "last name" << "|"
				<< std::setw(10) << "nickname" << "|" << std::endl;
	for (int i = 1; i <= this->_n; i++)
		this->_contacts[i - 1].display1(i);
}

void	Phonebook::add(void)
{
	std::string	input;

	if (this->_n >= 8)
	{
		if (this->_oldest >= 8)
			this->_oldest = 0;
		this->_contacts[this->_oldest].add();
		this->_oldest++;
		return ;
	}
	this->_contacts[_n].add();
	this->_n++;
	return ;
}

void	Phonebook::search(void)
{
	std::string input;
	int			id = -1;
	
	if (!this->_n)
	{
		std::cout << "! Phonebook is empty, nothing to display" << std::endl;
		return ;
	}
	this->_display();
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
		if (id <= this->_n && id > 0)
			return (this->_contacts[id - 1].display2());
		std::cout << "Invalid index" << std::endl;
	}
	return ;
}
