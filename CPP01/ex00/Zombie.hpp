/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:00:56 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 18:21:56 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class	Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private:
		std::string const _name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
