/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:11:17 by vintran           #+#    #+#             */
/*   Updated: 2022/02/13 17:23:55 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) : _RawBits(0)
{
	return ;
}

Fixed::Fixed(int const i)
{
	this->_RawBits = i << this->_FractBits;
	// this->_RawBits = i * 256;
	// this->_RawBits = i * pow(2, this->_FractBits);
	return ;
}

Fixed::Fixed(float const f)
{
	this->_RawBits = roundf(f * (1 << this->_FractBits));
	// this->_RawBits = roundf(f * 256);
	// this->_RawBits = roundf(f * pow(2, this->_FractBits));
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

int			Fixed::getRawBits(void) const
{
	return (this->_RawBits);
}

void		Fixed::setRawBits(int const raw)
{
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
	if (this != &rhs)
		this->_RawBits = rhs._RawBits;
	return (*this);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool		Fixed::operator>(Fixed const &rhs) const
{
	return (this->_RawBits > rhs._RawBits);
}

bool		Fixed::operator<(Fixed const &rhs) const
{
	return (this->_RawBits < rhs._RawBits);
}

bool		Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_RawBits >= rhs._RawBits);
}

bool		Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_RawBits <= rhs._RawBits);
}

bool		Fixed::operator==(Fixed const &rhs) const
{
	return (this->_RawBits == rhs._RawBits);
}

bool		Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_RawBits != rhs._RawBits);
}

Fixed		Fixed::operator+(Fixed const & rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed		Fixed::operator-(Fixed const & rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed		Fixed::operator*(Fixed const & rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed		Fixed::operator/(Fixed const & rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

Fixed &		Fixed::operator++(void)
{
	++this->_RawBits;
	return (*this);
}

Fixed &		Fixed::operator--(void)
{
	--this->_RawBits;
	return (*this);
}

Fixed		Fixed::operator++(int)
{
	Fixed	tmp = *this;

	this->_RawBits++;
	return (tmp);
}

Fixed		Fixed::operator--(int)
{
	Fixed	tmp = *this;

	this->_RawBits--;
	return (tmp);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed &			Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed &			Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}
