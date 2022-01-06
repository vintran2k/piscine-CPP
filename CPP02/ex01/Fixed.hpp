/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:11:19 by vintran           #+#    #+#             */
/*   Updated: 2022/01/06 02:58:39 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class	Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		Fixed &		operator=(Fixed const & rhs);
		
	private:
		int					_RawBits;
		static int const	_FractBits = 8;
};

#endif
