/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:24:15 by vintran           #+#    #+#             */
/*   Updated: 2022/01/15 17:25:15 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class		Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const & src);
		~Cure(void);
		Cure &		operator=(Cure const & rhs);

		AMateria *	clone() const;
		void		use(ICharacter & target);
};

#endif
