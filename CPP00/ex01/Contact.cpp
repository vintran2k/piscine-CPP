/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:05:09 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:19:10 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::add(void)
{
	std::cout << "first name: ";
	std::cin >> this->_infos[firstname];
	std::cout << "last name: ";
	std::cin >> this->_infos[lastname];
	std::cout << "nickname: ";
	std::cin >> this->_infos[nickname];
	std::cout << "phone_number: ";
	std::cin >> this->_infos[phonenumber];
	std::cout << "darkest_secret: ";
	std::cin >> this->_infos[secret];
	std::cin.ignore();
	return ;
}

void	resize_and_print(std::string str)
{
	if (str.size() >= 10)
	{
		str.resize(9);
		str.append(".");
	}
	else
		std::cout << std::setw(10);
	std::cout << str << "|";
	return ;
}

void	Contact::display1(int index)
{
	std::cout << std::setw(10) << index << "|";
	resize_and_print(this->_infos[firstname]);
	resize_and_print(this->_infos[lastname]);
	resize_and_print(this->_infos[nickname]);
	std::cout << std::endl;
	return ;
}

void	Contact::display2(void)
{
	std::cout	<< std::endl
				<< "First Name:       " << this->_infos[firstname] << std::endl
				<< "Last Name:        " << this->_infos[lastname] << std::endl
				<< "Nickname:         " << this->_infos[nickname] << std::endl
				<< "Phone Number:     " << this->_infos[phonenumber] << std::endl
				<< "Darkest secret:   " << this->_infos[secret] << std::endl << std::endl;
}
