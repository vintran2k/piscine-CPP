/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 04:56:05 by vintran           #+#    #+#             */
/*   Updated: 2022/01/30 08:28:27 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(void)
{
	return ;
}

Conversion::Conversion(std::string s) : _s(s)
{
	return ;
}

Conversion::Conversion(Conversion const & src)
{
	*this = src;
	return ;
}

Conversion::~Conversion(void)
{
	return ;
}

Conversion &	Conversion::operator=(Conversion const & rhs)
{
	if (this != &rhs)
		this->_s = rhs._s;
	return (*this);
}

void	Conversion::char_conv(void)
{
	char	c = this->_s[0];

	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	return ;
}

void	Conversion::int_conv(void)
{
	int			i = std::atoi(this->_s.c_str());

	if (i < CHAR_MIN || i > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(i)))
  		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	return ;
}

void	Conversion::float_conv(void)
{
	float	f = atof(this->_s.c_str());
	
	if (this->_s == "nanf" || this->_s == "+inff" || this->_s == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << this->_s << std::endl;
		std::cout << "double: " << this->_s.substr(0, this->_s.length() - 1) << std::endl;
		return ;
	}
	if (static_cast<int>(f) < CHAR_MIN || static_cast<int>(f) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(f)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (static_cast<long>(f) < INT_MIN || static_cast<long>(f) > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (fmod(f, 1))
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	return ;
}

void	Conversion::double_conv(void)
{
	double	d = strtod(this->_s.c_str(), NULL);
	
	if (this->_s == "nan" || this->_s == "+inf" || this->_s == "-inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << this->_s << "f" << std::endl;
		std::cout << "double: " << this->_s << std::endl;
		return ;
	}
	if (static_cast<int>(d) < CHAR_MIN || static_cast<int>(d) > CHAR_MAX)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(static_cast<char>(d)))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (static_cast<long>(d) < INT_MIN || static_cast<long>(d) > INT_MAX)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (fmod(d, 1))
	{
		std::cout << "float: " << d << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << std::endl;
	}
	else
	{
		std::cout << "float: " << d << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
	}
	return ;
}
