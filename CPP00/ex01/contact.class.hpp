/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:05:11 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 13:36:23 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>
#include <iomanip>

class	Contact
{
	public :
		Contact(void);
		~Contact(void);
		void	add(void);
		void	display1(int index);
		void	display2(void);

	private :
		enum type
		{
			firstname,
			lastname,
			nickname,
			phonenumber,
			secret
		};
		std::string infos[5];
};

#endif