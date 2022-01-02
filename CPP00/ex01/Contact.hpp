/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 17:17:06 by vintran           #+#    #+#             */
/*   Updated: 2022/01/02 17:18:36 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

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
		std::string _infos[5];
};

#endif
