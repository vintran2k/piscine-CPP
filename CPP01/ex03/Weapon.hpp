/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:03:47 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 16:54:18 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_H
# define _WEAPON_H

#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string const type);
		~Weapon(void);
		std::string const &		getType(void) const;
		void					setType(std::string type);

	private:
		std::string _type;
};

#endif
