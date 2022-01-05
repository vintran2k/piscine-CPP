/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:58:14 by vintran           #+#    #+#             */
/*   Updated: 2022/01/05 13:55:48 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_f[0] = &Karen::_debug;
	_f[1] = &Karen::_info;
	_f[2] = &Karen::_warning;
	_f[3] = &Karen::_error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void	Karen::_debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
	return ;
}

void	Karen::_info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
	return ;
}

void	Karen::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
	return ;
}

void	Karen::_error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return ;
}

void	Karen::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (_levels[i] == level)
			(this->*_f[i])();
	}
	return ;
}
