/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:58:14 by vintran           #+#    #+#             */
/*   Updated: 2022/01/05 15:10:53 by vintran          ###   ########.fr       */
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
	std::cout	<< "[ DEBUG ]" << std::endl
				<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl << std::endl;
	return ;
}

void	Karen::_info(void)
{
	std::cout	<< "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl << std::endl;
	return ;
}

void	Karen::_warning(void)
{
	std::cout	<< "[ WARNING ]" << std::endl
				<< "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl << std::endl;
	return ;
}

void	Karen::_error(void)
{
	std::cout	<< "[ ERROR ]" << std::endl
				<< "This is unacceptable ! I want to speak to the manager now." << std::endl;
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

std::string	Karen::getLevel(int level_id) const
{
	return (this->_levels[level_id]);
}
