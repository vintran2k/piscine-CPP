/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 22:33:00 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 15:58:24 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.class.hpp"
#include <cstdlib>

class	Phonebook
{
	public :
		Phonebook(void);
		~Phonebook(void);
		void	prompt(void);
		void	add(void);
		void	search(void);

	private :
		Contact contacts[8];
		int		n;
		void	display(void);
};

#endif
