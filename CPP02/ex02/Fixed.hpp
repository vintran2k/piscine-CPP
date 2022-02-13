/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 20:11:19 by vintran           #+#    #+#             */
/*   Updated: 2022/02/13 17:16:32 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class	Fixed
{
	public:
		Fixed(void);
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed &		operator=(Fixed const & rhs);

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;

		bool		operator>(Fixed const &rhs) const;
		bool		operator<(Fixed const & rhs) const;
		bool		operator>=(Fixed const & rhs) const;
		bool		operator<=(Fixed const & rhs) const;
		bool		operator==(Fixed const & rhs) const;
		bool		operator!=(Fixed const & rhs) const;

		Fixed		operator+(Fixed const & rhs) const;
		Fixed		operator-(Fixed const & rhs) const;
		Fixed		operator*(Fixed const & rhs) const;
		Fixed		operator/(Fixed const & rhs) const;

		Fixed &		operator++(void);		//prefix increment
		Fixed &		operator--(void);
		Fixed		operator++(int);		//postfix increment
		Fixed		operator--(int);

		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
		static Fixed &			min(Fixed & a, Fixed & b);
		static Fixed &			max(Fixed & a, Fixed & b);

	private:
		int					_RawBits;
		static int const	_FractBits = 8;
};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif
