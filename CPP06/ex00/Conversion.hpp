/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vintran <vintran@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 04:56:03 by vintran           #+#    #+#             */
/*   Updated: 2022/01/30 08:28:03 by vintran          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cmath>

class		Conversion
{
	public:
		Conversion(std::string s);
		Conversion(Conversion const & src);
		~Conversion(void);
		Conversion &	operator=(Conversion const & rhs);

		void	char_conv(void);
		void	int_conv(void);
		void	float_conv(void);
		void	double_conv(void);

	private:
		std::string		_s;
		Conversion(void);
};

#endif
