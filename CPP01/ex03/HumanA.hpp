/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 16:27:29 by vintran           #+#    #+#             */
/*   Updated: 2022/01/03 17:30:53 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class	HumanA
{
	public:
		HumanA(std::string const name, Weapon const& weapon);
		~HumanA(void);
		void	attack(void) const;

	private:
		std::string const	_name;
		Weapon const&		_weapon;
};

#endif
