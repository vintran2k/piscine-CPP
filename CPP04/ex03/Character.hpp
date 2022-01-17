/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 23:30:19 by vintran           #+#    #+#             */
/*   Updated: 2022/01/17 17:50:25 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class		Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const & src);
		~Character(void);
		Character &		operator=(Character const &);
	
		std::string 	const & getName() const;
		void			equip(AMateria* m);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);

	private:
		Character(void);
		std::string		_name;
		AMateria *		_inventory[4];
};

#endif
