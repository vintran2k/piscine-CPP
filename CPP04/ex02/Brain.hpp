/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:07:18 by vintran           #+#    #+#             */
/*   Updated: 2022/01/11 17:27:05 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class		Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);
		std::string getIdea(unsigned int index) const;
		void		setIdea(unsigned int index, std::string idea);
		Brain &		operator=(Brain const & rhs);
		void		printIdeas(void) const;

	private:
		std::string	_ideas[100];
};

#endif
