/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:17:25 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:18:25 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"
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
		Contact _contacts[8];
		int		_n;
		int		_oldest;
		void	_display(void);
};

#endif
