/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:38 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 17:34:27 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class		Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		~Cat(void);
		Brain &		getBrain(void) const;
		Cat &		operator=(Cat const & rhs);
		void		makeSound(void);

	private:
		Brain	*_brain;
};

#endif
