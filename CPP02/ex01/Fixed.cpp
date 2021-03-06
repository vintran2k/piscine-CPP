/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:11:17 by vintran           #+#    #+#             */
/*   Updated: 2022/02/13 15:58:48 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _RawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_RawBits = i << this->_FractBits;
	// this->_RawBits = i * 256;
	// this->_RawBits = i * pow(2, this->_FractBits);
	return ;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_RawBits = roundf(f * (1 << this->_FractBits));
	// this->_RawBits = roundf(f * 256);
	// this->_RawBits = roundf(f * pow(2, this->_FractBits));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_RawBits);
}

void		Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_RawBits = raw;
	return ;
}

float		Fixed::toFloat(void) const
{
	//		return (roundf(this->_RawBits) / 256);
	//		return (roundf(this->_RawBits) / pow(2, this->_FractBits));
	return (roundf(this->_RawBits) / (1 << this->_FractBits));
}

int			Fixed::toInt(void) const
{
	//		return (this->_RawBits / 256);
	//		return (this->_RawBits / pow(2, this->_FractBits));
	return (this->_RawBits >> this->_FractBits);
}

Fixed &		Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_RawBits = rhs._RawBits;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}
