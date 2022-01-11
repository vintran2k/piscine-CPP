/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:28 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 17:34:33 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class		Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		Brain & 	getBrain(void) const;
		Dog &		operator=(Dog const & rhs);
		void		makeSound(void);

	private:
		Brain	*_brain;
};

#endif
