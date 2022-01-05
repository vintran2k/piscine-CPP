/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:31:19 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 17:30:36 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class	HumanB
{
	public:
		HumanB(std::string const name);
		~HumanB(void);
		void	attack(void) const;
		void	setWeapon(Weapon& weapon);

	private:
		std::string	const	_name;
		Weapon*				_weapon;	
		
};

#endif
