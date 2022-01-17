/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 15:27:43 by vintran           #+#    #+#             */
/*   Updated: 2022/01/15 17:33:19 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class		ICharacter;

class		AMateria
{
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & src);
		virtual	~AMateria(void);
		std::string const &	getType(void) const;
		AMateria &		operator=(AMateria const & rhs);

		virtual AMateria *	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		AMateria(void);
		std::string	_type;
};

#endif
