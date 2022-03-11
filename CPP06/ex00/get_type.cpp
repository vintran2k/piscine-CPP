/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 06:19:35 by vintran           #+#    #+#             */
/*   Updated: 2022/03/09 15:38:00 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool	is_char(std::string const &str)
{
	int len = str.length();
	if (len == 1 && isprint(str[0]) && !isdigit(str[0]))
		return (true);
	return (false);
}

bool	is_int(std::string const &str)
{
	int	i;
	int	len;

	i = 0;
	len = str.length();
	while (i < len)
	{
		if (i == 0 && !isdigit(str[i]) && !(str[i] == '+' || str[i] == '-'))
			return (false);
		if (!isdigit(str[i]) && i != 0)
			return (false);
		i++;
	}
	long long	l = std::strtol(str.c_str(), NULL, 10);
	if (l < INT_MIN || l > INT_MAX)
		return (false);
	return (true);
}

bool	is_float(std::string const &str)
{
	size_t	i = 0;
	size_t	len = str.length();

	if (!str.compare("-inff") || !str.compare("+inff") || !str.compare("nanf"))
		return (true);

	size_t	p_pos = str.find('.');
	size_t	p_rpos = str.rfind('.');
	if (p_pos != p_rpos)
		return (false);
	if (p_pos == len - 1)
		return (false);

	size_t	f_position = str.find('f');
	size_t	f_position_check = str.rfind('f');
	if (f_position == std::string::npos)
		return (false);
	if (f_position != f_position_check)
		return (false);
	if (f_position != len - 1)
		return (false);

	size_t	m_pos = str.find("-");
	if (m_pos != std::string::npos && m_pos != 0)
		return (false);

	while (i < len - 1)
	{
		if (!isprint(str[i]))
			return (false);
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	if (!(str[i] == 'f'))
		return (false);
	return (true);
}

bool	is_double(std::string const &str)
{
	size_t	i = 0;
	size_t	len = str.length();

	if (!(str.compare("-inf")) || !(str.compare("+inf")) || !(str.compare("nan")))
		return (true);

	size_t	p_pos = str.find('.');
	size_t	p_rpos = str.rfind('.');
	if (p_pos != p_rpos)
		return (false);
	if (p_pos == len - 1)
		return (false);

	size_t	m_pos = str.find("-");
	if (m_pos != std::string::npos && m_pos != 0)
		return (false);

	while (i < len - 1)
	{
		if (!isprint(str[i]))
			return (false);
		if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.')
			return (false);
		i++;
	}
	if (!isdigit(str[i]) && !(str[i] == 'd'))
		return (false);
	return (true);
}

void	get_type(std::string const &str)
{
	Conversion	conv(str);

	if (is_char(str))
		conv.char_conv();
	else if (is_int(str))
		conv.int_conv();
	else if (is_float(str))
		conv.float_conv();
	else if (is_double(str))
		conv.double_conv();
	else
		std::cerr << "Invalid argument" << std::endl;
	return ;
}