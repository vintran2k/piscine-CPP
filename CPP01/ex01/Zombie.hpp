/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:56 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 15:25:37 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class	Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string	_name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif
