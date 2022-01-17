/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 22:59:18 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 16:14:26 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	return ;
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (rhs._materias[i] != NULL)
				this->_materias[i] = rhs._materias[i]->clone();
		}
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria *toLearn)
{
	if (toLearn == NULL)
	{
		std::cout << "Invalid AMateria" << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = toLearn;
			std::cout << toLearn->getType() << " has been learned" << std::endl;
			break;
		}
	}
	return ;
}

AMateria *	MateriaSource::createMateria(std::string const & type)
{
	if (type != "ice" && type != "cure")	// useless
		return (NULL);
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i] != NULL && !this->_materias[i]->getType().compare(type))
		{
			std::cout << type << " has been created" << std::endl;
			return (this->_materias[i]->clone());
		}
	}
	return (NULL);
}
