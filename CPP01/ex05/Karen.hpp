/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 19:58:59 by vintran           #+#    #+#             */
/*   Updated: 2022/01/04 20:33:10 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_H
# define KAREN_H

# include <iostream>

class	Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
	
	private:
		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);
		std::string	_levels[4];
		void		(Karen::*_f[4])(void);
};

#endif
