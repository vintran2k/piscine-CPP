/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 14:21:07 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 13:46:30 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(Animal const & src);
		virtual ~Animal(void);
		std::string		getType(void) const;
		Animal &		operator=(Animal const & rhs);
		virtual void	makeSound(void);

	protected:
		std::string	_type;
};

#endif
