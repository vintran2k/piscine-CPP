/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 08:41:05 by vintran           #+#    #+#             */
/*   Updated: 2022/02/01 12:16:17 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _N(0)
{
	return ;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const & src)
{
	*this = src;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &			Span::operator=(Span const & rhs)
{
	if (this != &rhs)
	{
		this->_N = rhs._N;
		this->_array = rhs._array;
	}
	return (*this);
}

void			Span::addNumber(int const nb)
{
	if (this->_array.size() >= this->_N)
		throw std::invalid_argument("No more space to store this value.");
	this->_array.push_back(nb);
}

unsigned int	Span::shortestSpan(void) const
{
	if (this->_array.size() < 2)
		throw std::invalid_argument("No span to find.");
	
	unsigned int	span = abs(this->_array[0] - this->_array[1]);
	for (std::vector<int>::const_iterator i = this->_array.begin(); i != this->_array.end(); i++)
	{
		for (std::vector<int>::const_iterator j = i + 1; j != this->_array.end(); j++)
		{
			if (span > static_cast<unsigned int>(abs(*i - *j)))
				span = abs(*i - *j);
		}
	}
	return (span);
}

unsigned int	Span::longestSpan(void) const
{
	if (this->_array.size() < 2)
		throw std::invalid_argument("No span to find.");

	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());

	return (max - min);
}

void    		Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (start != end)
	{
		int	dist = std::distance(start, end);
		if ((dist + this->_array.size()) >= this->_N)
			throw std::invalid_argument("No more space to store those values.");
		this->_array.insert(this->_array.begin() + this->_array.size(), start, end);
	}
	return ;
}

std::vector<int>	Span::getArray(void) const
{
	return (this->_array);
}

std::ostream &	operator<<(std::ostream & o, Span const & rhs)
{
	std::vector<int>	array = rhs.getArray();

	for (std::vector<int>::iterator it = array.begin(); it != array.end(); it++)
	{
		std::cout << *it;
		if (it != array.end() - 1)
			std::cout << " ";
	}
	return (o);
}
